	THUMB_FUNC_START sub_080A05A8
sub_080A05A8: @ 0x080A05A8
	push {lr}
	ldr r1, _080A05BC  @ =gRam
	ldr r2, _080A05C0  @ =0x00001811
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A05C4
	mov r2, #0
	b _080A05DE
	.byte 0x00
	.byte 0x00
_080A05BC:
	.4byte gRam
_080A05C0:
	.4byte 0x00001811
_080A05C4:
	ldr r3, _080A0600  @ =0x00000964
	add r0, r1, r3
	mov r2, #0
	ldrsh r0, [r0, r2]
	lsl r0, r0, #3
	sub r3, r3, #4
	add r1, r1, r3
	mov r2, #0
	ldrsh r1, [r1, r2]
	bl sub_080691D8
	lsl r0, r0, #16
	lsr r2, r0, #16
_080A05DE:
	ldr r1, _080A0604  @ =gRam
	mov r0, #255
	and r2, r2, r0
	ldr r3, _080A0608  @ =0x0000096C
	add r1, r1, r3
	strh r2, [r1]
	ldr r2, _080A060C  @ =gUnknown_0816872C
	mov r3, #0
	ldrsh r0, [r1, r3]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A0600:
	.4byte 0x00000964
_080A0604:
	.4byte gRam
_080A0608:
	.4byte 0x0000096C
_080A060C:
	.4byte gUnknown_0816872C
	THUMB_FUNC_END sub_080A05A8

