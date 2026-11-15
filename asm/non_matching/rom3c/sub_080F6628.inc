	THUMB_FUNC_START sub_080F6628
sub_080F6628: @ 0x080F6628
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r3, _080F667C  @ =gRam
	ldr r4, _080F6680  @ =0x00000EE2
	add r2, r3, r4
	add r2, r0, r2
	ldrb r4, [r2]
	mov r5, #150
	lsl r5, r5, #4
	add r2, r3, r5
	strb r4, [r2]
	ldr r4, _080F6684  @ =0x00000F02
	add r2, r3, r4
	add r2, r0, r2
	ldrb r4, [r2]
	add r5, r5, #1
	add r2, r3, r5
	strb r4, [r2]
	ldr r4, _080F6688  @ =0x00000ED2
	add r2, r3, r4
	add r2, r0, r2
	ldrb r4, [r2]
	add r5, r5, #3
	add r2, r3, r5
	strb r4, [r2]
	ldr r4, _080F668C  @ =0x00000EF2
	add r2, r3, r4
	add r0, r0, r2
	ldrb r0, [r0]
	add r5, r5, #1
	add r3, r3, r5
	strb r0, [r3]
	add r0, r1, #0
	bl sub_08079844
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F667C:
	.4byte gRam
_080F6680:
	.4byte 0x00000EE2
_080F6684:
	.4byte 0x00000F02
_080F6688:
	.4byte 0x00000ED2
_080F668C:
	.4byte 0x00000EF2
	THUMB_FUNC_END sub_080F6628

