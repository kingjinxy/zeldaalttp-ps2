	THUMB_FUNC_START sub_08067400
sub_08067400: @ 0x08067400
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl sub_0800099C
	add r1, r0, #0
	mov r0, #3
	and r1, r1, r0
	cmp r1, #1
	beq _0806742C
	cmp r1, #1
	bcc _08067422
	cmp r1, #2
	beq _08067434
	cmp r1, #3
	beq _08067444
	b _0806744C
_08067422:
	ldr r0, _08067428  @ =gUnknown_0814C5C0
	b _08067436
	.byte 0x00
	.byte 0x00
_08067428:
	.4byte gUnknown_0814C5C0
_0806742C:
	ldr r0, _08067430  @ =gUnknown_0814C5C9
	b _08067436
_08067430:
	.4byte gUnknown_0814C5C9
_08067434:
	ldr r0, _08067440  @ =gUnknown_0814C5D4
_08067436:
	add r1, r4, #0
	bl sub_0801386C
	b _0806744C
	.byte 0x00
	.byte 0x00
_08067440:
	.4byte gUnknown_0814C5D4
_08067444:
	ldr r0, _08067464  @ =gUnknown_0814C5DF
	add r1, r4, #0
	bl sub_0801386C
_0806744C:
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _0806746C
	ldr r0, _08067468  @ =gUnknown_0843F96C
	add r1, r4, #0
	bl sub_0801386C
	b _08067474
	.byte 0x00
	.byte 0x00
_08067464:
	.4byte gUnknown_0814C5DF
_08067468:
	.4byte gUnknown_0843F96C
_0806746C:
	ldr r0, _0806748C  @ =gUnknown_0843F975
	add r1, r4, #0
	bl sub_0801386C
_08067474:
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08067494
	ldr r0, _08067490  @ =gUnknown_0843F97E
	add r1, r4, #0
	bl sub_0801386C
	b _0806749C
	.byte 0x00
	.byte 0x00
_0806748C:
	.4byte gUnknown_0843F975
_08067490:
	.4byte gUnknown_0843F97E
_08067494:
	ldr r0, _080674B4  @ =gUnknown_0843F987
	add r1, r4, #0
	bl sub_0801386C
_0806749C:
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _080674BC
	ldr r0, _080674B8  @ =gUnknown_0843F990
	add r1, r4, #0
	bl sub_0801386C
	b _080674C4
	.byte 0x00
	.byte 0x00
_080674B4:
	.4byte gUnknown_0843F987
_080674B8:
	.4byte gUnknown_0843F990
_080674BC:
	ldr r0, _080674CC  @ =gUnknown_0843F999
	add r1, r4, #0
	bl sub_0801386C
_080674C4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080674CC:
	.4byte gUnknown_0843F999
	THUMB_FUNC_END sub_08067400

