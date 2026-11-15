	THUMB_FUNC_START sub_080E55E8
sub_080E55E8: @ 0x080E55E8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080E5644  @ =gRam
	ldr r0, _080E5648  @ =0x00000D94
	add r1, r5, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #48
	orr r0, r0, r2
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E563E
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E563E
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl Sprite3_Move
	ldr r1, _080E564C  @ =gUnknown_081774A0
	ldr r2, _080E5650  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080E563E:
	pop {r4,r5}
	pop {r0}
	bx r0
_080E5644:
	.4byte gRam
_080E5648:
	.4byte 0x00000D94
_080E564C:
	.4byte gUnknown_081774A0
_080E5650:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E55E8

