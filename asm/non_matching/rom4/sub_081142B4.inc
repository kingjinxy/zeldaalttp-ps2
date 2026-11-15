	THUMB_FUNC_START sub_081142B4
sub_081142B4: @ 0x081142B4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _081142FC  @ =gRam
	ldr r0, _08114300  @ =0x0000096C
	add r1, r5, r0
	mov r0, #2
	strh r0, [r1]
	ldr r1, _08114304  @ =gUnknown_0817D8C0
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _081142F4
	add r0, r4, #0
	bl sub_080C5080
	ldr r1, _08114308  @ =gUnknown_0817D8D0
	ldr r2, _0811430C  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_081142F4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081142FC:
	.4byte gRam
_08114300:
	.4byte 0x0000096C
_08114304:
	.4byte gUnknown_0817D8C0
_08114308:
	.4byte gUnknown_0817D8D0
_0811430C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_081142B4

