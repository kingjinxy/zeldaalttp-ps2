	THUMB_FUNC_START sub_080674D0
sub_080674D0: @ 0x080674D0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl 0x0800099C
	mov r1, #6
	bl __umodsi3
	cmp r0, #5
	bhi _0806757C
	lsl r0, r0, #2
	ldr r1, _080674F0  @ =0x080674F4
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_080674F0:
	.4byte 0x080674F4
	.4byte _0806750C
	.4byte _08067520
	.4byte _08067534
	.4byte _0806753C
	.4byte _08067550
	.4byte _0806756C
_0806750C:
	ldr r0, _08067518  @ =gUnknown_0814C5E8
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _0806751C  @ =gUnknown_0814C5EB
	b _0806755A
_08067518:
	.4byte gUnknown_0814C5E8
_0806751C:
	.4byte gUnknown_0814C5EB
_08067520:
	ldr r0, _0806752C  @ =gUnknown_0814C5E8
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08067530  @ =gUnknown_0814C5EE
	b _0806755A
_0806752C:
	.4byte gUnknown_0814C5E8
_08067530:
	.4byte gUnknown_0814C5EE
_08067534:
	ldr r0, _08067538  @ =gUnknown_0814C5E8
	b _08067552
_08067538:
	.4byte gUnknown_0814C5E8
_0806753C:
	ldr r0, _08067548  @ =gUnknown_0814C5EB
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _0806754C  @ =gUnknown_0814C5EE
	b _0806755A
_08067548:
	.4byte gUnknown_0814C5EB
_0806754C:
	.4byte gUnknown_0814C5EE
_08067550:
	ldr r0, _08067564  @ =gUnknown_0814C5EB
_08067552:
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08067568  @ =gUnknown_0814C5F1
_0806755A:
	add r1, r4, #0
	bl sub_0801386C
	b _0806757C
	.byte 0x00
	.byte 0x00
_08067564:
	.4byte gUnknown_0814C5EB
_08067568:
	.4byte gUnknown_0814C5F1
_0806756C:
	ldr r0, _08067584  @ =gUnknown_0814C5EE
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08067588  @ =gUnknown_0814C5F1
	add r1, r4, #0
	bl sub_0801386C
_0806757C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08067584:
	.4byte gUnknown_0814C5EE
_08067588:
	.4byte gUnknown_0814C5F1
	THUMB_FUNC_END sub_080674D0

