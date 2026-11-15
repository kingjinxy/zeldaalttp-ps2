	THUMB_FUNC_START sub_08103CCC
sub_08103CCC: @ 0x08103CCC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _08103D60  @ =gRam
	ldr r1, _08103D64  @ =0x00000FB2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r2, [r0]
	lsl r2, r2, #1
	add r1, r1, #160
	add r0, r6, r1
	add r5, r4, r0
	ldrb r1, [r5]
	mov r0, #8
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #27
	orr r2, r2, r0
	lsl r2, r2, #24
	lsr r2, r2, #24
	ldr r0, _08103D68  @ =0x00000F92
	add r1, r6, r0
	add r1, r4, r1
	ldr r0, _08103D6C  @ =gUnknown_0817BB58
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _08103D70  @ =0x00001122
	add r3, r6, r1
	add r3, r4, r3
	ldrb r1, [r3]
	mov r0, #191
	and r0, r0, r1
	ldr r1, _08103D74  @ =gUnknown_0817BB60
	add r2, r2, r1
	ldrb r1, [r2]
	orr r0, r0, r1
	strb r0, [r3]
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _08103D58
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _08103D58
	add r0, r4, #0
	bl sub_080C5044
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	ldr r1, _08103D78  @ =gUnknown_0817BB68
	ldr r2, _08103D7C  @ =0x00000F52
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_08103D58:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08103D60:
	.4byte gRam
_08103D64:
	.4byte 0x00000FB2
_08103D68:
	.4byte 0x00000F92
_08103D6C:
	.4byte gUnknown_0817BB58
_08103D70:
	.4byte 0x00001122
_08103D74:
	.4byte gUnknown_0817BB60
_08103D78:
	.4byte gUnknown_0817BB68
_08103D7C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08103CCC

