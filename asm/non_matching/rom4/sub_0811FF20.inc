	THUMB_FUNC_START sub_0811FF20
sub_0811FF20: @ 0x0811FF20
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #8]
	bl sub_080C177C
	ldr r1, _08120000  @ =gRam
	ldr r2, _08120004  @ =0x00000E29
	add r0, r1, r2
	ldr r3, [sp, #8]
	add r0, r3, r0
	ldrb r2, [r0]
	ldr r4, _08120008  @ =0x0000096C
	add r0, r1, r4
	mov r3, #0
	strb r2, [r0]
	mov r6, #151
	lsl r6, r6, #4
	add r2, r1, r6
	strb r3, [r2]
	ldr r7, _0812000C  @ =0x00001855
	add r0, r1, r7
	ldr r3, [sp, #8]
	add r0, r3, r0
	ldrb r0, [r0]
	str r0, [sp, #12]
	add r5, r1, #0
	mov r10, r2
	ldr r4, _08120010  @ =gUnknown_03003E74
	mov r9, r4
	sub r6, r6, #16
	add r6, r6, r5
	mov r8, r6
	ldr r0, _08120014  @ =gUnknown_08180128
	ldrb r0, [r0]
	mov r7, sp
	strb r0, [r7, #4]
_0811FF74:
	ldr r1, _08120008  @ =0x0000096C
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #1
	mov r2, r10
	mov r1, #0
	ldrsb r1, [r2, r1]
	add r0, r0, r1
	ldr r3, _08120018  @ =gUnknown_0818011C
	add r0, r0, r3
	ldrb r3, [r0]
	mov r4, r9
	ldrh r0, [r4]
	ldr r6, _0812001C  @ =0x00000964
	add r1, r5, r6
	ldrh r1, [r1]
	mov r7, r8
	ldrh r2, [r7]
	ldr r6, _08120020  @ =gUnknown_03003954
	ldrb r4, [r6]
	mov r7, sp
	ldrb r7, [r7, #4]
	orr r4, r4, r7
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	mov r1, r9
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	mov r2, r8
	ldrh r0, [r2]
	sub r0, r0, #16
	strh r0, [r2]
	mov r3, r10
	ldrb r0, [r3]
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r3]
	ldr r0, [sp, #12]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	str r4, [sp, #12]
	cmp r0, #0
	bge _0811FF74
	ldr r6, _08120024  @ =0x00000E1F
	add r0, r5, r6
	ldr r7, [sp, #8]
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _0811FFEE
	add r0, r7, #0
	bl sub_08120028
_0811FFEE:
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08120000:
	.4byte gRam
_08120004:
	.4byte 0x00000E29
_08120008:
	.4byte 0x0000096C
_0812000C:
	.4byte 0x00001855
_08120010:
	.4byte gUnknown_03003E74
_08120014:
	.4byte gUnknown_08180128
_08120018:
	.4byte gUnknown_0818011C
_0812001C:
	.4byte 0x00000964
_08120020:
	.4byte gUnknown_03003954
_08120024:
	.4byte 0x00000E1F
	THUMB_FUNC_END sub_0811FF20

