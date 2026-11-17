	THUMB_FUNC_START sub_0801CDA0
sub_0801CDA0: @ 0x0801CDA0
	push {r4,r5,lr}
	add r5, r0, #0
	add r0, r0, #112
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801CDC4
	ldr r1, [r5, #84]
	add r0, r5, #0
	bl sub_0803CECC
	add r4, r0, #0
	bl sub_0800099C
	ldr r2, _0801CDC0  @ =gUnknown_0813A76D
	mov r1, #15
	b _0801CDD6
_0801CDC0:
	.4byte gUnknown_0813A76D
_0801CDC4:
	ldr r1, [r5, #84]
	add r0, r5, #0
	bl sub_0803CECC
	add r4, r0, #0
	bl sub_0800099C
	ldr r2, _0801CDFC  @ =gUnknown_0813A76D
	mov r1, #3
_0801CDD6:
	and r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	add r4, r4, r0
	mov r0, #31
	and r4, r4, r0
	add r0, r5, #0
	add r0, r0, #43
	strb r4, [r0]
	add r0, r5, #0
	add r0, r0, #112
	ldrb r1, [r0]
	mov r2, #1
	eor r1, r1, r2
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801CDFC:
	.4byte gUnknown_0813A76D
	THUMB_FUNC_END sub_0801CDA0

