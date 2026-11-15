	THUMB_FUNC_START sub_08011228
sub_08011228: @ 0x08011228
	push {r4,r5,lr}
	add r4, r0, #0
	add r5, r1, #0
	mov r0, #7
	and r5, r5, r0
	and r4, r4, r0
	bl sub_080113D8
	add r0, r4, #0
	bl sub_08011344
	ldr r1, _08011270  @ =gUnknown_0200B250
	lsl r0, r4, #6
	add r1, r0, r1
	add r0, r1, #0
	add r0, r0, #63
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	ble _0801128A
	add r0, r5, #0
	bl sub_08067A18
	ldr r0, _08011274  @ =gUnknown_0202A6F0
	lsl r1, r4, #4
	add r1, r1, r0
	mov r0, #15
	ldrsb r0, [r1, r0]
	cmp r0, #0
	ble _0801127C
	ldr r1, _08011278  @ =gUnknown_020167D0
	add r0, r5, #0
	bl sub_080679F0
	b _0801128A
_08011270:
	.4byte gUnknown_0200B250
_08011274:
	.4byte gUnknown_0202A6F0
_08011278:
	.4byte gUnknown_020167D0
_0801127C:
	mov r1, #128
	add r0, r5, #0
	orr r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_08067B68
_0801128A:
	add r0, r5, #0
	bl sub_08011344
	ldr r0, _080112B4  @ =gUnknown_0200B250
	lsl r1, r5, #6
	add r1, r1, r0
	add r1, r1, #63
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bgt _080112A4
	mov r0, #254
	strb r0, [r1]
_080112A4:
	bl sub_08011408
	add r0, r5, #0
	bl sub_08010D1C
	pop {r4,r5}
	pop {r0}
	bx r0
_080112B4:
	.4byte gUnknown_0200B250
	THUMB_FUNC_END sub_08011228

