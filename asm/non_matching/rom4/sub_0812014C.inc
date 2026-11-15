	THUMB_FUNC_START sub_0812014C
sub_0812014C: @ 0x0812014C
	push {r4-r7,lr}
	sub sp, sp, #4
	ldr r0, _08120170  @ =gRam
	ldr r2, _08120174  @ =0x00000964
	add r1, r0, r2
	mov r4, #0
	ldrsh r1, [r1, r4]
	add r3, r0, #0
	cmp r1, #0
	bne _08120178
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	ldrh r1, [r0]
	add r2, r2, #12
	add r0, r3, r2
	strh r1, [r0]
	b _0812018C
_08120170:
	.4byte gRam
_08120174:
	.4byte 0x00000964
_08120178:
	mov r4, #150
	lsl r4, r4, #4
	add r0, r3, r4
	mov r1, #0
	ldrsh r0, [r0, r1]
	neg r0, r0
	mov r2, #151
	lsl r2, r2, #4
	add r1, r3, r2
	strh r0, [r1]
_0812018C:
	mov r4, #151
	lsl r4, r4, #4
	add r2, r3, r4
	ldr r0, _081201C4  @ =gUnknown_02006890
	ldrh r1, [r0]
	ldrh r2, [r2]
	add r1, r1, r2
	ldr r2, _081201C8  @ =0x00000958
	add r0, r3, r2
	ldrh r0, [r0]
	add r0, r0, #8
	sub r1, r1, r0
	sub r4, r4, #16
	add r0, r3, r4
	strh r1, [r0]
	ldr r1, _081201CC  @ =0x0000096C
	add r0, r3, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #0
	bne _081201D4
	add r4, r4, #8
	add r0, r3, r4
	ldrh r1, [r0]
	ldr r2, _081201D0  @ =0x00000974
	add r0, r3, r2
	strh r1, [r0]
	b _081201E4
_081201C4:
	.4byte gUnknown_02006890
_081201C8:
	.4byte 0x00000958
_081201CC:
	.4byte 0x0000096C
_081201D0:
	.4byte 0x00000974
_081201D4:
	ldr r4, _08120250  @ =0x00000968
	add r0, r3, r4
	mov r1, #0
	ldrsh r0, [r0, r1]
	neg r0, r0
	ldr r2, _08120254  @ =0x00000974
	add r1, r3, r2
	strh r0, [r1]
_081201E4:
	ldr r4, _08120254  @ =0x00000974
	add r2, r3, r4
	ldr r0, _08120258  @ =gUnknown_0200688E
	ldrh r1, [r0]
	ldrh r2, [r2]
	add r1, r1, r2
	ldr r2, _0812025C  @ =0x00000952
	add r0, r3, r2
	ldrh r0, [r0]
	add r0, r0, #8
	sub r1, r1, r0
	sub r4, r4, #16
	add r7, r3, r4
	strh r1, [r7]
	ldr r5, _08120260  @ =gUnknown_03003E74
	ldrh r0, [r5]
	ldrh r1, [r7]
	add r2, r2, #14
	add r6, r3, r2
	ldrh r2, [r6]
	ldr r4, _08120264  @ =gUnknown_08180130
	mov r12, r4
	ldr r4, _08120268  @ =0x00001733
	add r3, r3, r4
	ldrb r3, [r3]
	add r3, r3, r12
	ldrb r3, [r3]
	mov r4, #240
	lsl r4, r4, #6
	mov r12, r4
	mov r4, r12
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C1918
	lsl r0, r0, #24
	lsr r0, r0, #24
	strh r0, [r5]
	ldrb r0, [r6]
	cmp r0, #240
	bhi _0812026C
	ldrb r0, [r7]
	cmp r0, #240
	bhi _0812026C
	mov r0, #1
	b _0812026E
_08120250:
	.4byte 0x00000968
_08120254:
	.4byte 0x00000974
_08120258:
	.4byte gUnknown_0200688E
_0812025C:
	.4byte 0x00000952
_08120260:
	.4byte gUnknown_03003E74
_08120264:
	.4byte gUnknown_08180130
_08120268:
	.4byte 0x00001733
_0812026C:
	mov r0, #0
_0812026E:
	add sp, sp, #4
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0812014C

	.byte 0x00
	.byte 0x00
