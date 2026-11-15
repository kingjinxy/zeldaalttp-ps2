	THUMB_FUNC_START sub_08011344
sub_08011344: @ 0x08011344
	push {r4-r6,lr}
	lsl r0, r0, #24
	mov r1, #224
	lsl r1, r1, #19
	and r1, r1, r0
	lsr r4, r1, #24
	ldr r1, _08011398  @ =gUnknown_020167D0
	add r0, r4, #0
	bl sub_08067A04
	lsl r0, r0, #24
	lsr r6, r0, #24
	lsl r1, r4, #6
	ldr r0, _0801139C  @ =gUnknown_0200B250
	add r1, r1, r0
	add r0, r4, #0
	bl sub_08067A30
	lsl r0, r0, #24
	lsr r5, r0, #24
	lsl r0, r6, #24
	asr r1, r0, #24
	cmp r1, #0
	bge _08011376
	lsr r5, r0, #24
_08011376:
	lsl r0, r5, #24
	cmp r0, #0
	bgt _08011384
	cmp r1, #0
	ble _08011384
	mov r6, #255
	mov r5, #255
_08011384:
	lsl r0, r5, #24
	asr r1, r0, #24
	mov r0, #1
	neg r0, r0
	cmp r1, r0
	beq _080113A0
	cmp r1, #0
	beq _080113A6
	b _080113AC
	.byte 0x00
	.byte 0x00
_08011398:
	.4byte gUnknown_020167D0
_0801139C:
	.4byte gUnknown_0200B250
_080113A0:
	add r0, r4, #0
	bl sub_08067B68
_080113A6:
	add r0, r4, #0
	bl sub_08011184
_080113AC:
	ldr r1, _080113CC  @ =gUnknown_0200B250
	lsl r0, r4, #6
	add r0, r0, r1
	add r0, r0, #63
	strb r5, [r0]
	ldr r0, _080113D0  @ =gUnknown_0202A6F0
	lsl r1, r4, #4
	add r1, r1, r0
	strb r6, [r1, #15]
	ldr r0, _080113D4  @ =gUnknown_020167D0
	bl sub_08068260
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080113CC:
	.4byte gUnknown_0200B250
_080113D0:
	.4byte gUnknown_0202A6F0
_080113D4:
	.4byte gUnknown_020167D0
	THUMB_FUNC_END sub_08011344

