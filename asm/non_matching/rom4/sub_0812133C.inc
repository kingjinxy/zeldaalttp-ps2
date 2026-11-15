	THUMB_FUNC_START sub_0812133C
sub_0812133C: @ 0x0812133C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _081213EC  @ =gUnknown_08180034
	ldr r1, _081213F0  @ =gRam
	ldr r3, _081213F4  @ =0x00000E29
	add r1, r1, r3
	add r0, r0, r1
	ldrb r1, [r0]
	lsl r0, r1, #2
	add r0, r0, r2
	ldr r0, [r0]
	mov r8, r0
	add r1, r1, #1
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r0, [r1]
	mov r4, r8
	sub r4, r0, r4
	mov r10, r4
	mov r7, #0
	ldr r0, _081213F8  @ =gUnknown_03003E74
	mov r9, r0
_08121374:
	add r1, r7, #0
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r2, r7, #0
	add r1, r1, r8
	ldrb r1, [r1]
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r2, r2, r8
	ldrb r2, [r2]
	mov r3, r9
	ldrh r0, [r3]
	mov r4, r8
	add r3, r4, r7
	ldrb r6, [r3]
	mov r3, #15
	and r3, r3, r6
	ldr r4, _081213FC  @ =gUnknown_08180371
	add r3, r3, r4
	ldrb r3, [r3]
	mov r4, #192
	and r4, r4, r6
	mov r5, #60
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #48
	and r4, r4, r6
	lsr r4, r4, #4
	str r4, [sp]
	bl sub_080C6368
	mov r1, r9
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C1918
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r3, r9
	strh r0, [r3]
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, r10
	bne _08121374
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081213EC:
	.4byte gUnknown_08180034
_081213F0:
	.4byte gRam
_081213F4:
	.4byte 0x00000E29
_081213F8:
	.4byte gUnknown_03003E74
_081213FC:
	.4byte gUnknown_08180371
	THUMB_FUNC_END sub_0812133C

