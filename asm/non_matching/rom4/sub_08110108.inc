	THUMB_FUNC_START sub_08110108
sub_08110108: @ 0x08110108
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _08110154
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _08110154
	add r0, r4, #0
	bl sub_080C5044
	ldr r1, _0811015C  @ =gRam
	ldr r2, _08110160  @ =0x00000D84
	add r0, r1, r2
	add r0, r4, r0
	strb r5, [r0]
	ldr r2, _08110164  @ =gUnknown_0817D3E8
	ldr r0, _08110168  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_08110154:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811015C:
	.4byte gRam
_08110160:
	.4byte 0x00000D84
_08110164:
	.4byte gUnknown_0817D3E8
_08110168:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08110108

