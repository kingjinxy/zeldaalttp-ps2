	THUMB_FUNC_START sub_080A0610
sub_080A0610: @ 0x080A0610
	push {r4,lr}
	add r4, r0, #0
	ldr r3, _080A0668  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	ldrh r0, [r0]
	mov r1, #8
	neg r1, r1
	and r1, r1, r0
	lsl r1, r1, #3
	ldr r2, _080A066C  @ =0x0000096C
	add r0, r3, r2
	strh r1, [r0]
	sub r2, r2, #8
	add r0, r3, r2
	ldrh r2, [r0]
	mov r0, #63
	and r0, r0, r2
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r0, #161
	lsl r0, r0, #4
	add r3, r3, r0
	ldrb r0, [r3]
	cmp r0, #0
	beq _080A0652
	mov r2, #128
	lsl r2, r2, #5
	add r0, r1, r2
	lsl r0, r0, #16
	lsr r1, r0, #16
_080A0652:
	ldr r2, _080A0670  @ =gUnknown_0200CBA0
	add r0, r1, r2
	ldrb r0, [r0]
	strb r0, [r4]
	ldr r1, _080A0674  @ =gUnknown_08168B2C
	ldrb r0, [r4]
	add r0, r0, r1
	ldrb r0, [r0]
	pop {r4}
	pop {r1}
	bx r1
_080A0668:
	.4byte gRam
_080A066C:
	.4byte 0x0000096C
_080A0670:
	.4byte gUnknown_0200CBA0
_080A0674:
	.4byte gUnknown_08168B2C
	THUMB_FUNC_END sub_080A0610

