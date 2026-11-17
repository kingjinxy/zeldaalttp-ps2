	THUMB_FUNC_START sub_080672A4
sub_080672A4: @ 0x080672A4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _080672C4
	ldr r0, _080672C0  @ =gUnknown_0814C58C
	add r1, r4, #0
	bl sub_0801386C
	b _080672CC
_080672C0:
	.4byte gUnknown_0814C58C
_080672C4:
	ldr r0, _080672E4  @ =gUnknown_0814C58F
	add r1, r4, #0
	bl sub_0801386C
_080672CC:
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _080672EC
	ldr r0, _080672E8  @ =gUnknown_0814C592
	add r1, r4, #0
	bl sub_0801386C
	b _080672F4
	.byte 0x00
	.byte 0x00
_080672E4:
	.4byte gUnknown_0814C58F
_080672E8:
	.4byte gUnknown_0814C592
_080672EC:
	ldr r0, _0806730C  @ =gUnknown_0814C595
	add r1, r4, #0
	bl sub_0801386C
_080672F4:
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08067314
	ldr r0, _08067310  @ =gUnknown_0814C598
	add r1, r4, #0
	bl sub_0801386C
	b _0806731C
	.byte 0x00
	.byte 0x00
_0806730C:
	.4byte gUnknown_0814C595
_08067310:
	.4byte gUnknown_0814C598
_08067314:
	ldr r0, _08067334  @ =gUnknown_0814C59B
	add r1, r4, #0
	bl sub_0801386C
_0806731C:
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _0806733C
	ldr r0, _08067338  @ =gUnknown_0814C5A7
	add r1, r4, #0
	bl sub_0801386C
	b _08067344
	.byte 0x00
	.byte 0x00
_08067334:
	.4byte gUnknown_0814C59B
_08067338:
	.4byte gUnknown_0814C5A7
_0806733C:
	ldr r0, _0806735C  @ =gUnknown_0814C5AA
	add r1, r4, #0
	bl sub_0801386C
_08067344:
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08067364
	ldr r0, _08067360  @ =gUnknown_0814C5B9
	add r1, r4, #0
	bl sub_0801386C
	b _0806736C
	.byte 0x00
	.byte 0x00
_0806735C:
	.4byte gUnknown_0814C5AA
_08067360:
	.4byte gUnknown_0814C5B9
_08067364:
	ldr r0, _08067388  @ =gUnknown_0814C5BC
	add r1, r4, #0
	bl sub_0801386C
_0806736C:
	bl sub_0800099C
	mov r1, #3
	bl __umodsi3
	add r1, r0, #0
	cmp r1, #1
	beq _08067394
	cmp r1, #1
	bcc _0806738C
	cmp r1, #2
	beq _080673A4
	b _080673AC
	.byte 0x00
	.byte 0x00
_08067388:
	.4byte gUnknown_0814C5BC
_0806738C:
	ldr r0, _08067390  @ =gUnknown_0814C59E
	b _08067396
_08067390:
	.4byte gUnknown_0814C59E
_08067394:
	ldr r0, _080673A0  @ =gUnknown_0814C5A1
_08067396:
	add r1, r4, #0
	bl sub_0801386C
	b _080673AC
	.byte 0x00
	.byte 0x00
_080673A0:
	.4byte gUnknown_0814C5A1
_080673A4:
	ldr r0, _080673C8  @ =gUnknown_0814C5A4
	add r1, r4, #0
	bl sub_0801386C
_080673AC:
	bl sub_0800099C
	add r1, r0, #0
	mov r0, #3
	and r1, r1, r0
	cmp r1, #1
	beq _080673D4
	cmp r1, #1
	bcc _080673CC
	cmp r1, #2
	beq _080673DC
	cmp r1, #3
	beq _080673EC
	b _080673F4
_080673C8:
	.4byte gUnknown_0814C5A4
_080673CC:
	ldr r0, _080673D0  @ =gUnknown_0814C5AD
	b _080673DE
_080673D0:
	.4byte gUnknown_0814C5AD
_080673D4:
	ldr r0, _080673D8  @ =gUnknown_0814C5B0
	b _080673DE
_080673D8:
	.4byte gUnknown_0814C5B0
_080673DC:
	ldr r0, _080673E8  @ =gUnknown_0814C5B3
_080673DE:
	add r1, r4, #0
	bl sub_0801386C
	b _080673F4
	.byte 0x00
	.byte 0x00
_080673E8:
	.4byte gUnknown_0814C5B3
_080673EC:
	ldr r0, _080673FC  @ =gUnknown_0814C5B6
	add r1, r4, #0
	bl sub_0801386C
_080673F4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080673FC:
	.4byte gUnknown_0814C5B6
	THUMB_FUNC_END sub_080672A4

