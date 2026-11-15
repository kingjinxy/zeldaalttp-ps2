	THUMB_FUNC_START sub_08068E7C
sub_08068E7C: @ 0x08068E7C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r4, r0, #0
	ldrh r0, [r4]
	ldr r1, _08068EDC  @ =0x0000FFFF
	cmp r0, r1
	beq _08068F2E
	ldr r0, _08068EE0  @ =0x00003FFF
	mov r8, r0
	mov r6, #128
	lsl r6, r6, #7
	add r7, r1, #0
	mov r0, #192
	lsl r0, r0, #8
	mov r12, r0
_08068E9C:
	ldrh r3, [r4]
	mov r0, #192
	lsl r0, r0, #19
	add r2, r3, r0
	add r4, r4, #2
	ldrh r0, [r4]
	mov r3, r8
	and r3, r3, r0
	mov r1, r12
	and r1, r1, r0
	add r4, r4, #2
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	add r5, r4, #2
	cmp r0, #0
	bne _08068EF8
	and r1, r1, r6
	cmp r1, #0
	bne _08068EE4
	cmp r3, #0
	beq _08068F28
	add r1, r3, #0
_08068ECA:
	ldrh r0, [r4]
	strh r0, [r2]
	add r4, r4, #2
	add r2, r2, #2
	sub r1, r1, #1
	cmp r1, #0
	bne _08068ECA
	b _08068F28
	.byte 0x00
	.byte 0x00
_08068EDC:
	.4byte 0x0000FFFF
_08068EE0:
	.4byte 0x00003FFF
_08068EE4:
	cmp r3, #0
	beq _08068F26
	add r1, r3, #0
_08068EEA:
	ldrh r0, [r4]
	strh r0, [r2]
	add r2, r2, #2
	sub r1, r1, #1
	cmp r1, #0
	bne _08068EEA
	b _08068F26
_08068EF8:
	and r1, r1, r6
	cmp r1, #0
	bne _08068F14
	cmp r3, #0
	beq _08068F28
	add r1, r3, #0
_08068F04:
	ldrh r0, [r4]
	strh r0, [r2]
	add r4, r4, #2
	add r2, r2, #64
	sub r1, r1, #1
	cmp r1, #0
	bne _08068F04
	b _08068F28
_08068F14:
	cmp r3, #0
	beq _08068F26
	add r1, r3, #0
_08068F1A:
	ldrh r0, [r4]
	strh r0, [r2]
	add r2, r2, #64
	sub r1, r1, #1
	cmp r1, #0
	bne _08068F1A
_08068F26:
	add r4, r5, #0
_08068F28:
	ldrh r0, [r4]
	cmp r0, r7
	bne _08068E9C
_08068F2E:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08068E7C

