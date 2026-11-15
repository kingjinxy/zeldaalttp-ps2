	THUMB_FUNC_START sub_0804A16C
sub_0804A16C: @ 0x0804A16C
	push {r4,r5,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804A1F8
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	cmp r0, #131
	bls _0804A1F8
	add r4, r7, #0
	add r4, r4, #8
	ldr r5, _0804A1F4  @ =gUnknown_0813F7E0
	bl sub_0800099C
	mov r1, #15
	and r0, r0, r1
	add r1, r5, r0
	ldrb r0, [r1]
	strb r0, [r4]
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #255
	beq _0804A1D0
	add r0, r7, #0
	add r0, r0, #8
	ldrb r1, [r0]
	mov r0, #0
	mov r2, #1
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804A1D0
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
_0804A1D0:
	mov r0, #15
	mov r1, #6
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804A1EA
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
_0804A1EA:
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0804A20C
	.byte 0x00
	.byte 0x00
_0804A1F4:
	.4byte gUnknown_0813F7E0
_0804A1F8:
	ldr r0, _0804A214  @ =gUnknown_0813F7CC
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
_0804A20C:
	add sp, sp, #12
	pop {r4,r5,r7}
	pop {r0}
	bx r0
_0804A214:
	.4byte gUnknown_0813F7CC
	THUMB_FUNC_END sub_0804A16C

