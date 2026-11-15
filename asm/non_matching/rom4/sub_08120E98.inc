	THUMB_FUNC_START sub_08120E98
sub_08120E98: @ 0x08120E98
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r6, _08120F98  @ =gRam
	ldr r0, _08120F9C  @ =0x00000978
	add r0, r0, r6
	mov r8, r0
	mov r0, #3
	mov r1, r8
	strb r0, [r1]
	lsl r1, r3, #1
	ldr r2, _08120FA0  @ =gUnknown_020069D6
	add r0, r1, r2
	ldrh r2, [r0]
	mov r4, #151
	lsl r4, r4, #4
	add r0, r6, r4
	strh r2, [r0]
	ldr r0, _08120FA4  @ =gUnknown_02006A56
	add r1, r1, r0
	ldrh r1, [r1]
	ldr r2, _08120FA8  @ =0x00000974
	add r0, r6, r2
	strh r1, [r0]
	ldr r0, _08120FAC  @ =gUnknown_020069B6
	add r4, r3, r0
	ldrb r0, [r4]
	cmp r0, #8
	beq _08120F88
	add r0, r3, #0
	mov r1, #16
	bl sub_080C18C8
	ldrb r0, [r4]
	lsl r0, r0, #2
	add r0, r0, #3
	ldr r2, _08120FB0  @ =0x00001733
	add r1, r6, r2
	strb r0, [r1]
	ldrb r5, [r1]
	mov r3, #150
	lsl r3, r3, #4
	add r3, r3, r6
	mov r10, r3
	ldr r4, _08120FB4  @ =0x00000964
	add r4, r4, r6
	mov r9, r4
	ldr r7, _08120FB8  @ =gUnknown_03003E74
_08120F02:
	ldr r0, _08120FBC  @ =gUnknown_081802AC
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #255
	beq _08120F60
	ldr r2, _08120FC0  @ =gUnknown_081802EC
	lsl r3, r5, #1
	add r2, r3, r2
	mov r1, #151
	lsl r1, r1, #4
	add r0, r6, r1
	ldrh r1, [r0]
	ldrh r2, [r2]
	add r1, r1, r2
	ldr r2, _08120FC4  @ =0x00000958
	add r0, r6, r2
	ldrh r0, [r0]
	sub r1, r1, r0
	mov r0, r10
	strh r1, [r0]
	ldr r0, _08120FC8  @ =gUnknown_0818032C
	add r3, r3, r0
	ldr r1, _08120FA8  @ =0x00000974
	add r0, r6, r1
	ldrh r1, [r0]
	ldrh r3, [r3]
	add r1, r1, r3
	sub r2, r2, #6
	add r0, r6, r2
	ldrh r0, [r0]
	sub r1, r1, r0
	mov r3, r9
	strh r1, [r3]
	ldrh r0, [r7]
	ldrh r1, [r3]
	mov r3, r10
	ldrh r2, [r3]
	ldrb r3, [r4]
	ldr r4, _08120FCC  @ =gUnknown_081802CC
	add r4, r5, r4
	ldrb r4, [r4]
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
_08120F60:
	ldrh r0, [r7]
	add r0, r0, #1
	strh r0, [r7]
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C1918
	lsl r0, r0, #24
	lsr r0, r0, #24
	strh r0, [r7]
	sub r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r4, r8
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08120F02
_08120F88:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08120F98:
	.4byte gRam
_08120F9C:
	.4byte 0x00000978
_08120FA0:
	.4byte gUnknown_020069D6
_08120FA4:
	.4byte gUnknown_02006A56
_08120FA8:
	.4byte 0x00000974
_08120FAC:
	.4byte gUnknown_020069B6
_08120FB0:
	.4byte 0x00001733
_08120FB4:
	.4byte 0x00000964
_08120FB8:
	.4byte gUnknown_03003E74
_08120FBC:
	.4byte gUnknown_081802AC
_08120FC0:
	.4byte gUnknown_081802EC
_08120FC4:
	.4byte 0x00000958
_08120FC8:
	.4byte gUnknown_0818032C
_08120FCC:
	.4byte gUnknown_081802CC
	THUMB_FUNC_END sub_08120E98

