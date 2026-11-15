	THUMB_FUNC_START sub_08105504
sub_08105504: @ 0x08105504
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r9
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _081055CE
	ldr r2, _081055E0  @ =gRam
	ldr r1, _081055E4  @ =0x00000F72
	add r0, r2, r1
	add r0, r0, r9
	ldrb r1, [r0]
	ldr r3, _081055E8  @ =0x0000096C
	add r0, r2, r3
	strh r1, [r0]
	add r1, sp, #4
	add r0, r1, #0
	ldrb r0, [r0]
	add r0, r0, #3
	strb r0, [r1]
	ldr r7, _081055EC  @ =0x00000F62
	add r0, r2, r7
	add r0, r0, r9
	ldrb r1, [r0]
	lsl r1, r1, #24
	cmp r1, #0
	blt _081055C8
	add r6, sp, #4
	ldr r0, _081055F0  @ =0x00000964
	add r0, r0, r2
	mov r8, r0
_08105558:
	mov r4, #192
	asr r5, r1, #24
	cmp r5, #0
	bne _08105562
	mov r4, #194
_08105562:
	ldr r3, _081055E0  @ =gRam
	ldr r1, _081055E8  @ =0x0000096C
	add r1, r1, r3
	mov r10, r1
	mov r2, #0
	ldrsh r0, [r1, r2]
	cmp r0, #6
	bgt _0810557A
	add r0, r4, #0
	sub r0, r0, #64
	lsl r0, r0, #24
	lsr r4, r0, #24
_0810557A:
	ldr r0, _081055F4  @ =gUnknown_03003E74
	ldrb r1, [r6]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r7, #150
	lsl r7, r7, #4
	add r1, r3, r7
	ldrh r1, [r1]
	mov r7, r8
	ldrh r2, [r7]
	ldr r7, _081055F8  @ =0x00000969
	add r3, r3, r7
	ldrb r3, [r3]
	lsl r3, r3, #24
	asr r3, r3, #24
	lsl r3, r3, #8
	orr r4, r4, r3
	lsl r3, r4, #16
	lsr r3, r3, #16
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	mov r1, r8
	ldrh r0, [r1]
	mov r2, r10
	ldrh r1, [r2]
	sub r0, r0, r1
	mov r3, r8
	strh r0, [r3]
	sub r1, r5, #1
	ldrb r0, [r6]
	sub r0, r0, #1
	strb r0, [r6]
	lsl r1, r1, #24
	cmp r1, #0
	bge _08105558
_081055C8:
	mov r0, r9
	bl sub_080C6230
_081055CE:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081055E0:
	.4byte gRam
_081055E4:
	.4byte 0x00000F72
_081055E8:
	.4byte 0x0000096C
_081055EC:
	.4byte 0x00000F62
_081055F0:
	.4byte 0x00000964
_081055F4:
	.4byte gUnknown_03003E74
_081055F8:
	.4byte 0x00000969
	THUMB_FUNC_END sub_08105504

