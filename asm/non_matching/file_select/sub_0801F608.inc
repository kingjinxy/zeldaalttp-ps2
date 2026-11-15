	THUMB_FUNC_START sub_0801F608
sub_0801F608: @ 0x0801F608
	push {r4,r5,lr}
	add r4, r0, #0
	ldr r0, _0801F660  @ =gUnknown_03000E20
	ldrh r1, [r0]
	mov r5, #7
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0801F62E
	ldr r1, [r4, #100]
	add r0, r4, #0
	bl 0x08009EA4
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x080040C4
_0801F62E:
	add r0, r4, #0
	bl sub_0801F6BC
	add r0, r4, #0
	bl 0x0800963C
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801F658
	mov r0, #1
	strb r0, [r4, #20]
	bl 0x0800099C
	ldr r1, _0801F664  @ =gUnknown_0813B134
	and r0, r0, r5
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r4, #23]
_0801F658:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801F660:
	.4byte gUnknown_03000E20
_0801F664:
	.4byte gUnknown_0813B134
	THUMB_FUNC_END sub_0801F608

