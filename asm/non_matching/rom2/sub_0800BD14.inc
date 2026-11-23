	.ALIGN 2, 0
	.GLOBAL sub_0800BD14
	.THUMB
	.THUMB_FUNC
	.TYPE sub_0800BD14, function
sub_0800BD14:
push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r9, r0
	add r0, r0, #3
	mov r2, #4
	neg r2, r2
	add r1, r2, #0
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r9, r0
	ldr r6, _0800BD48  @ =gUnknown_0202A8D0
	mov r8, r6
	ldrh r7, [r6]
	mov r5, #1
	mov r3, #160
	lsl r3, r3, #6
	add r3, r3, r8
	sub r4, r3, r0
	mov r2, #0
	b _0800BD62
_0800BD48:
	.4byte gUnknown_0202A8D0
_0800BD4C:
	cmp r1, r4
	bhi _0800BD54
	cmp r3, r0
	bls _0800BD8E
_0800BD54:
	cmp r4, r1
	bhi _0800BD5C
	cmp r0, r3
	bls _0800BD8E
_0800BD5C:
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
_0800BD62:
	cmp r2, r7
	bcs _0800BD86
	lsl r0, r2, #2
	add r0, r0, r8
	ldrh r1, [r0, #2]
	ldr r6, _0800BD98  @ =gUnknown_0202A8D0
	add r1, r1, r6
	ldrh r0, [r0, #4]
	add r0, r0, r6
	cmp r1, r4
	bhi _0800BD7C
	cmp r4, r0
	bls _0800BD8E
_0800BD7C:
	cmp r1, r3
	bhi _0800BD4C
	cmp r3, r0
	bhi _0800BD4C
	mov r5, #0
_0800BD86:
	lsl r0, r7, #2
	mov r10, r0
	cmp r5, #0
	bne _0800BE18
_0800BD8E:
	mov r1, #0
	mov r12, r1
	lsl r2, r7, #2
	mov r10, r2
	b _0800BDAC
_0800BD98:
	.4byte gUnknown_0202A8D0
_0800BD9C:
	mov r5, #0
_0800BD9E:
	mov r0, r12
	add r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r12, r0
	cmp r12, r7
	bcs _0800BE14
_0800BDAC:
	mov r6, r12
	lsl r0, r6, #2
	add r0, r0, r8
	ldrh r0, [r0, #2]
	ldr r1, _0800BDD4  @ =gUnknown_0202A8D0
	add r3, r0, r1
	mov r2, r9
	sub r4, r3, r2
	mov r5, #0
	mov r0, r10
	add r0, r0, #2
	add r0, r0, r8
	add r0, r0, #4
	cmp r4, r0
	bcc _0800BD9E
	mov r5, #1
	mov r2, #0
	add r6, r1, #0
	b _0800BDEE
	.byte 0x00
	.byte 0x00
_0800BDD4:
	.4byte gUnknown_0202A8D0
_0800BDD8:
	cmp r1, r4
	bhi _0800BDE0
	cmp r3, r0
	bls _0800BD9C
_0800BDE0:
	cmp r4, r1
	bhi _0800BDE8
	cmp r0, r3
	bls _0800BD9C
_0800BDE8:
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
_0800BDEE:
	cmp r2, r7
	bcs _0800BE10
	lsl r0, r2, #2
	add r0, r0, r8
	ldrh r1, [r0, #2]
	add r1, r1, r6
	ldrh r0, [r0, #4]
	add r0, r0, r6
	cmp r1, r4
	bhi _0800BE06
	cmp r4, r0
	bcc _0800BD9C
_0800BE06:
	cmp r1, r3
	bcs _0800BDD8
	cmp r3, r0
	bhi _0800BDD8
	mov r5, #0
_0800BE10:
	cmp r5, #0
	beq _0800BD9E
_0800BE14:
	cmp r5, #0
	beq _0800BE40
_0800BE18:
	ldr r0, _0800BE3C  @ =gUnknown_0202A8D2
	mov r6, r10
	add r2, r6, r0
	sub r3, r0, #2
	sub r1, r4, r3
	strh r1, [r2]
	add r0, r0, #2
	add r0, r0, r10
	add r1, r1, r9
	strh r1, [r0]
	add r0, r7, #1
	strh r0, [r3]
	add r0, r4, #0
	mov r1, r9
	bl zero_memory
	add r0, r4, #0
	b _0800BE42
_0800BE3C:
	.4byte gUnknown_0202A8D2
_0800BE40:
	mov r0, #0
_0800BE42:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
