	THUMB_FUNC_START sub_08067038
sub_08067038: @ 0x08067038
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	bl 0x0800099C
	add r1, r0, #0
	mov r0, #255
	and r1, r1, r0
	cmp r1, #84
	bhi _08067058
	ldr r0, _08067054  @ =gUnknown_0814C4E4
	b _0806705E
	.byte 0x00
	.byte 0x00
_08067054:
	.4byte gUnknown_0814C4E4
_08067058:
	cmp r1, #169
	bhi _0806706C
	ldr r0, _08067068  @ =gUnknown_0814C4E7
_0806705E:
	add r1, r4, #0
	bl sub_0801386C
	b _08067074
	.byte 0x00
	.byte 0x00
_08067068:
	.4byte gUnknown_0814C4E7
_0806706C:
	ldr r0, _0806707C  @ =gUnknown_0814C4EA
	add r1, r5, #0
	bl sub_0801386C
_08067074:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806707C:
	.4byte gUnknown_0814C4EA
	THUMB_FUNC_END sub_08067038

