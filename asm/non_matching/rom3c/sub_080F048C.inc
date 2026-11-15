	THUMB_FUNC_START sub_080F048C
sub_080F048C: @ 0x080F048C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080F04C4  @ =gRam
	ldr r1, _080F04C8  @ =0x0000178A
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #10
	and r0, r0, r1
	cmp r0, #0
	beq _080F04D0
	ldr r1, _080F04CC  @ =0x000016F6
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080F04D0
	bl sub_080C3C98
	add r0, r4, #0
	bl sub_080C4574
	bl sub_080C466C
	lsl r0, r0, #24
	lsr r0, r0, #24
	b _080F04D2
_080F04C4:
	.4byte gRam
_080F04C8:
	.4byte 0x0000178A
_080F04CC:
	.4byte 0x000016F6
_080F04D0:
	mov r0, #0
_080F04D2:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080F048C

