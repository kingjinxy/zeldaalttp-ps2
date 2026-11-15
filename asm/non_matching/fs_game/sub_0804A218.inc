	THUMB_FUNC_START sub_0804A218
sub_0804A218: @ 0x0804A218
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #46
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #207
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	mov r1, #192
	lsl r1, r1, #10
	str r1, [r0, #16]
	bl sub_0800099C
	add r2, r0, #0
	ldr r0, [r7]
	ldr r1, _0804A2D0  @ =gUnknown_0813F7F8
	mov r3, #3
	and r2, r2, r3
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	ldrh r2, [r1]
	str r2, [r0, #12]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #3
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, _0804A2D4  @ =gUnknown_0813F80C
	str r1, [r0, #72]
	ldr r0, [r7]
	mov r1, #10
	bl sub_08003870
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804A2D0:
	.4byte gUnknown_0813F7F8
_0804A2D4:
	.4byte gUnknown_0813F80C
	THUMB_FUNC_END sub_0804A218

