	THUMB_FUNC_START sub_08125694
sub_08125694: @ 0x08125694
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	mov r0, #0
	mov r8, r0
	ldr r1, _081257BC  @ =gRam
	ldr r2, _081257C0  @ =0x00001B19
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _081256B2
	b _081257F4
_081256B2:
	mov r9, r1
	ldr r7, _081257C4  @ =0x00001B90
	add r7, r7, r9
	mov r10, r7
_081256BA:
	mov r2, #217
	lsl r2, r2, #5
	add r2, r2, r9
	ldr r0, [r2]
	add r0, r0, r8
	ldrb r1, [r0]
	ldr r0, _081257C8  @ =0x00001B2E
	add r0, r0, r9
	strb r1, [r0]
	mov r5, #127
	and r5, r5, r1
	lsl r0, r5, #1
	mov r1, r10
	strb r0, [r1]
	mov r0, r8
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	mov r6, #1
	cmp r5, #0
	beq _0812572C
	add r3, r2, #0
	add r4, r3, #0
	add r4, r4, #112
	mov r2, #32
	add r2, r2, r3
	mov r12, r2
_081256F2:
	ldr r0, [r3]
	add r0, r0, r8
	ldrb r1, [r0]
	add r2, r6, r4
	mov r7, r12
	add r0, r1, r7
	ldrb r0, [r0]
	strb r0, [r2]
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r2, r6, r4
	ldr r0, _081257CC  @ =gUnknown_03003D98
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r2]
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r0, r8
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	sub r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _081256F2
_0812572C:
	ldr r4, _081257BC  @ =gRam
	mov r1, #217
	lsl r1, r1, #5
	add r0, r4, r1
	ldr r0, [r0]
	add r0, r0, r8
	ldrb r1, [r0]
	ldr r2, _081257D0  @ =0x00001B2F
	add r0, r4, r2
	strb r1, [r0]
	mov r0, r8
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	ldr r7, _081257C4  @ =0x00001B90
	add r2, r4, r7
	ldrb r0, [r2]
	cmp r0, #5
	bls _081257E2
	str r2, [sp]
	bl sub_081259B8
	add r7, r0, #0
	ldr r2, [sp]
	cmp r7, #0
	bge _081257D4
	ldr r1, _081257C8  @ =0x00001B2E
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _081257E2
	ldrb r4, [r2]
	lsr r5, r4, #2
	mov r0, r8
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	mov r6, #1
	cmp r5, #0
	beq _081257AE
	mov r12, r2
_08125786:
	mov r0, r12
	add r2, r6, r0
	ldrb r3, [r2]
	add r1, r4, r0
	ldrb r0, [r1]
	strb r0, [r2]
	strb r3, [r1]
	add r0, r6, #2
	lsl r0, r0, #24
	lsr r6, r0, #24
	lsl r0, r4, #24
	mov r1, #252
	lsl r1, r1, #24
	add r0, r0, r1
	lsr r4, r0, #24
	sub r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _08125786
_081257AE:
	add r0, r7, #0
	bl sub_08125980
	bl sub_08125A10
	b _081257E2
	.byte 0x00
	.byte 0x00
_081257BC:
	.4byte gRam
_081257C0:
	.4byte 0x00001B19
_081257C4:
	.4byte 0x00001B90
_081257C8:
	.4byte 0x00001B2E
_081257CC:
	.4byte gUnknown_03003D98
_081257D0:
	.4byte 0x00001B2F
_081257D4:
	cmp r7, #0
	beq _081257E2
	add r0, r7, #0
	bl sub_08125948
	bl sub_08125A10
_081257E2:
	ldr r1, _08125804  @ =0x00001B19
	add r1, r1, r9
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	beq _081257F4
	b _081256BA
_081257F4:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08125804:
	.4byte 0x00001B19
	THUMB_FUNC_END sub_08125694

