	THUMB_FUNC_START sub_08101290
sub_08101290: @ 0x08101290
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #206
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	bge _081012B0
	b _081013C4
_081012B0:
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r3, _081013D8  @ =gRam
	ldr r1, _081013DC  @ =0x00001032
	add r0, r3, r1
	add r0, r4, r0
	mov r6, #0
	mov r1, #91
	strb r1, [r0]
	ldr r2, _081013E0  @ =0x00001122
	add r0, r3, r2
	add r0, r4, r0
	str r0, [sp]
	mov r0, #11
	ldr r7, [sp]
	strb r0, [r7]
	ldr r1, _081013E4  @ =0x00000E75
	add r0, r3, r1
	add r5, r4, r0
	mov r0, #4
	strb r0, [r5]
	ldr r2, _081013E8  @ =0x00000F62
	add r0, r3, r2
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r7, _081013EC  @ =0x00001012
	add r0, r3, r7
	add r0, r4, r0
	mov r1, #1
	mov r8, r1
	mov r2, #1
	mov r9, r2
	mov r7, r9
	strb r7, [r0]
	ldr r0, _081013F0  @ =0x00001132
	add r0, r0, r3
	mov r10, r0
	add r0, r4, r0
	strb r6, [r0]
	ldr r1, _081013F4  @ =0x00000D84
	add r0, r3, r1
	add r0, r4, r0
	strb r6, [r0]
	mov r1, #0
	ldr r2, _081013F8  @ =0x000009DA
	add r2, r2, r3
	mov r12, r2
	ldrh r0, [r2]
	cmp r0, #236
	bne _0810131C
	mov r1, #1
_0810131C:
	cmp r1, #0
	beq _08101332
	ldr r7, _081013FC  @ =0x00000EA5
	add r2, r3, r7
	add r2, r4, r2
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	mov r1, #6
	orr r0, r0, r1
	strb r0, [r2]
_08101332:
	ldr r1, _08101400  @ =0x00001142
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #23
	strb r1, [r0]
	ldr r2, _08101404  @ =0x00000ED2
	add r1, r3, r2
	add r1, r4, r1
	ldr r7, _08101408  @ =0x00000964
	add r2, r3, r7
	ldrb r0, [r2]
	add r0, r0, #23
	strb r0, [r1]
	ldr r0, _0810140C  @ =0x000010A2
	add r1, r3, r0
	add r1, r4, r1
	sub r7, r7, #4
	add r0, r3, r7
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #31
	mov r7, r8
	and r0, r0, r7
	strb r0, [r1]
	ldr r0, _08101410  @ =0x00001092
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r2]
	lsl r0, r0, #24
	asr r0, r0, #31
	mov r2, r8
	and r0, r0, r2
	strb r0, [r1]
	ldr r7, _08101414  @ =0x00000FC2
	add r0, r3, r7
	add r0, r4, r0
	mov r2, #48
	strb r2, [r0]
	mov r1, #0
	mov r7, r12
	ldrh r0, [r7]
	cmp r0, #236
	bne _0810138A
	mov r1, #1
_0810138A:
	cmp r1, #0
	beq _081013C4
	ldr r0, _08101418  @ =gUnknown_02010990
	mov r1, r9
	strb r1, [r0]
	mov r0, #5
	ldr r7, [sp]
	strb r0, [r7]
	ldrb r0, [r5]
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r5]
	ldr r1, _0810141C  @ =0x00000F52
	add r0, r3, r1
	add r0, r4, r0
	strb r6, [r0]
	ldr r7, _08101420  @ =0x000010E2
	add r0, r3, r7
	add r0, r4, r0
	strb r2, [r0]
	ldr r0, _08101424  @ =gUnknown_08227988
	add r0, r0, #206
	ldrb r1, [r0]
	mov r0, #224
	and r0, r0, r1
	mov r1, #24
	orr r0, r0, r1
	mov r1, r10
	strb r0, [r1]
_081013C4:
	add r0, r4, #0
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_081013D8:
	.4byte gRam
_081013DC:
	.4byte 0x00001032
_081013E0:
	.4byte 0x00001122
_081013E4:
	.4byte 0x00000E75
_081013E8:
	.4byte 0x00000F62
_081013EC:
	.4byte 0x00001012
_081013F0:
	.4byte 0x00001132
_081013F4:
	.4byte 0x00000D84
_081013F8:
	.4byte 0x000009DA
_081013FC:
	.4byte 0x00000EA5
_08101400:
	.4byte 0x00001142
_08101404:
	.4byte 0x00000ED2
_08101408:
	.4byte 0x00000964
_0810140C:
	.4byte 0x000010A2
_08101410:
	.4byte 0x00001092
_08101414:
	.4byte 0x00000FC2
_08101418:
	.4byte gUnknown_02010990
_0810141C:
	.4byte 0x00000F52
_08101420:
	.4byte 0x000010E2
_08101424:
	.4byte gUnknown_08227988
	THUMB_FUNC_END sub_08101290

