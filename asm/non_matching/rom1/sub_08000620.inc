	THUMB_FUNC_START sub_08000620
sub_08000620: @ 0x08000620
	ldr r1, _080007A0  @ =gUnknown_03005060
	ldr r2, _080007A4  @ =gEntityLinks
_08000624:
	ldr r3, [r1, #8]
	cmp r3, r0
	beq _08000632
_0800062A:
	add r1, r1, #144
	cmp r1, r2
	bcc _08000624
	mov pc, lr
_08000632:
	mov r3, #94
	ldrb r3, [r0, r3]
	lsr r3, r3, #5
	bcc _0800062A
	push {r4}
	mov r2, #0
	str r2, [r1, #8]
	strb r2, [r1, #12]
	ldrb r4, [r1, #13]
	strb r2, [r1, #13]
	ldr r2, [r1]
	ldr r3, [r1, #4]
	str r3, [r2, #4]
	str r2, [r3]
	cmp r4, #1
	bne _0800065C
	ldrb r1, [r2, #13]
	cmp r1, #1
	beq _0800065C
	ldr r1, _080007A8  @ =gUnknown_02016D50
	str r3, [r1]
_0800065C:
	mov r1, #94
	ldrb r2, [r0, r1]
	mov r3, #239
	and r2, r2, r3
	strb r2, [r0, r1]
	pop {r4}
	mov pc, lr
	THUMB_FUNC_END sub_08000580

