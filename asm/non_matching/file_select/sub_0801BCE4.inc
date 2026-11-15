	THUMB_FUNC_START sub_0801BCE4
sub_0801BCE4: @ 0x0801BCE4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	mov r8, r0
	ldr r1, _0801BD18  @ =gUnknown_03006A30
	ldr r7, [r1, #40]
	add r0, r1, #0
	add r0, r0, #184
	ldr r5, [r0]
	mov r2, #164
	lsl r2, r2, #1
	add r0, r1, r2
	ldr r6, [r0]
	add r2, r2, #144
	add r0, r1, r2
	ldr r3, [r0]
	ldr r0, _0801BD1C  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r0, #3
	beq _0801BD66
	cmp r0, #3
	bgt _0801BD20
	cmp r0, #2
	beq _0801BD92
	b _0801BDA8
_0801BD18:
	.4byte gUnknown_03006A30
_0801BD1C:
	.4byte gUnknown_03006C80
_0801BD20:
	cmp r0, #4
	bne _0801BDA8
	add r0, r7, #0
	add r0, r0, #69
	add r1, r5, #0
	add r1, r1, #69
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bls _0801BD3A
	add r0, r7, #0
	add r7, r5, #0
	add r5, r0, #0
_0801BD3A:
	add r0, r5, #0
	add r0, r0, #69
	add r1, r6, #0
	add r1, r1, #69
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bls _0801BD50
	add r0, r5, #0
	add r5, r6, #0
	add r6, r0, #0
_0801BD50:
	add r0, r6, #0
	add r0, r0, #69
	add r1, r3, #0
	add r1, r1, #69
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bls _0801BD66
	add r0, r6, #0
	add r6, r3, #0
	add r3, r0, #0
_0801BD66:
	add r0, r7, #0
	add r0, r0, #69
	add r1, r5, #0
	add r1, r1, #69
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bls _0801BD7C
	add r0, r7, #0
	add r7, r5, #0
	add r5, r0, #0
_0801BD7C:
	add r0, r5, #0
	add r0, r0, #69
	add r1, r6, #0
	add r1, r1, #69
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bls _0801BD92
	add r0, r5, #0
	add r5, r6, #0
	add r6, r0, #0
_0801BD92:
	add r0, r7, #0
	add r0, r0, #69
	add r1, r5, #0
	add r1, r1, #69
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bls _0801BDA8
	add r0, r7, #0
	add r7, r5, #0
	add r5, r0, #0
_0801BDA8:
	ldr r4, _0801BDD4  @ =gUnknown_0813A1C4
	str r3, [sp]
	bl 0x0800099C
	ldr r1, _0801BDD8  @ =gUnknown_03006C80
	ldrb r1, [r1]
	sub r1, r1, #1
	lsl r1, r1, #3
	mov r2, #7
	and r2, r2, r0
	add r1, r1, r2
	add r1, r1, r4
	ldrb r0, [r1]
	ldr r3, [sp]
	cmp r0, #2
	beq _0801BDEC
	cmp r0, #2
	bgt _0801BDDC
	cmp r0, #1
	beq _0801BDE6
	b _0801BDE0
	.byte 0x00
	.byte 0x00
_0801BDD4:
	.4byte gUnknown_0813A1C4
_0801BDD8:
	.4byte gUnknown_03006C80
_0801BDDC:
	cmp r0, #3
	beq _0801BDF2
_0801BDE0:
	mov r0, r8
	str r7, [r0, #88]
	b _0801BDF6
_0801BDE6:
	mov r1, r8
	str r5, [r1, #88]
	b _0801BDF6
_0801BDEC:
	mov r2, r8
	str r6, [r2, #88]
	b _0801BDF6
_0801BDF2:
	mov r0, r8
	str r3, [r0, #88]
_0801BDF6:
	mov r1, r8
	ldr r2, [r1, #88]
	add r0, r2, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801BE18
	ldr r1, _0801BE40  @ =gUnknown_03000940
	ldrb r0, [r2, #10]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _0801BE20
_0801BE18:
	bl sub_08044594
	mov r2, r8
	str r0, [r2, #88]
_0801BE20:
	mov r0, r8
	ldr r1, [r0, #88]
	bl sub_0803CECC
	add r0, r0, #4
	mov r1, #24
	and r0, r0, r1
	mov r1, r8
	add r1, r1, #43
	strb r0, [r1]
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0801BE40:
	.4byte gUnknown_03000940
	THUMB_FUNC_END sub_0801BCE4

