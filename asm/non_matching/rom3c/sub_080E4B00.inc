	THUMB_FUNC_START sub_080E4B00
sub_080E4B00: @ 0x080E4B00
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r10
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E4BCA
	ldr r1, _080E4BDC  @ =gRam
	ldr r2, _080E4BE0  @ =0x00000FD2
	add r0, r1, r2
	add r0, r0, r10
	ldrb r0, [r0]
	lsr r0, r0, #1
	str r0, [sp, #8]
	mov r0, #12
	ldr r7, [sp, #8]
	and r7, r7, r0
	str r7, [sp, #8]
	mov r0, #3
	mov r8, r0
	add r6, sp, #4
	mov r9, r1
_080E4B42:
	ldr r5, [sp, #8]
	add r5, r5, r8
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r0, _080E4BE4  @ =gUnknown_03003E74
	ldrb r1, [r6]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r9
	ldr r1, _080E4BE8  @ =gUnknown_081773AC
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, _080E4BEC  @ =0x00000964
	add r3, r3, r9
	ldr r2, _080E4BF0  @ =gUnknown_081773BC
	add r2, r5, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E4BF4  @ =gUnknown_081773CC
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080E4BF8  @ =gUnknown_081773DC
	add r5, r5, r4
	ldrb r4, [r5]
	ldr r7, _080E4BFC  @ =gUnknown_03002B99
	mov r5, #0
	ldrsb r5, [r7, r5]
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #2
	str r4, [sp]
	bl sub_080C6004
	mov r0, r8
	lsl r1, r0, #24
	mov r2, #255
	lsl r2, r2, #24
	add r1, r1, r2
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsr r7, r1, #24
	mov r8, r7
	cmp r1, #0
	bge _080E4B42
	mov r0, r10
	mov r1, #2
	mov r2, #3
	bl sub_080C6350
_080E4BCA:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E4BDC:
	.4byte gRam
_080E4BE0:
	.4byte 0x00000FD2
_080E4BE4:
	.4byte gUnknown_03003E74
_080E4BE8:
	.4byte gUnknown_081773AC
_080E4BEC:
	.4byte 0x00000964
_080E4BF0:
	.4byte gUnknown_081773BC
_080E4BF4:
	.4byte gUnknown_081773CC
_080E4BF8:
	.4byte gUnknown_081773DC
_080E4BFC:
	.4byte gUnknown_03002B99
	THUMB_FUNC_END sub_080E4B00

