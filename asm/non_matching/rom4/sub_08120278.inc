	THUMB_FUNC_START sub_08120278
sub_08120278: @ 0x08120278
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	ldr r1, _081202AC  @ =gRam
	ldr r2, _081202B0  @ =0x00000964
	add r0, r1, r2
	mov r3, #0
	ldrsh r0, [r0, r3]
	add r7, r1, #0
	cmp r0, #0
	bne _081202B4
	mov r4, #150
	lsl r4, r4, #4
	add r0, r7, r4
	ldrh r1, [r0]
	mov r5, #151
	lsl r5, r5, #4
	add r0, r7, r5
	strh r1, [r0]
	b _081202C8
_081202AC:
	.4byte gRam
_081202B0:
	.4byte 0x00000964
_081202B4:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r7, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	neg r0, r0
	mov r3, #151
	lsl r3, r3, #4
	add r1, r7, r3
	strh r0, [r1]
_081202C8:
	mov r4, #151
	lsl r4, r4, #4
	add r2, r7, r4
	ldr r0, _08120304  @ =gUnknown_02006890
	ldrh r1, [r0]
	ldrh r2, [r2]
	add r1, r1, r2
	ldr r5, _08120308  @ =0x00000958
	add r0, r7, r5
	ldrh r0, [r0]
	add r0, r0, #8
	sub r1, r1, r0
	mov r2, #150
	lsl r2, r2, #4
	add r0, r7, r2
	strh r1, [r0]
	ldr r3, _0812030C  @ =0x0000096C
	add r0, r7, r3
	mov r4, #0
	ldrsh r0, [r0, r4]
	cmp r0, #0
	bne _08120310
	add r5, r5, #16
	add r0, r7, r5
	ldrh r1, [r0]
	add r2, r2, #20
	add r0, r7, r2
	strh r1, [r0]
	b _08120320
	.byte 0x00
	.byte 0x00
_08120304:
	.4byte gUnknown_02006890
_08120308:
	.4byte 0x00000958
_0812030C:
	.4byte 0x0000096C
_08120310:
	ldr r3, _08120410  @ =0x00000968
	add r0, r7, r3
	mov r4, #0
	ldrsh r0, [r0, r4]
	neg r0, r0
	ldr r5, _08120414  @ =0x00000974
	add r1, r7, r5
	strh r0, [r1]
_08120320:
	ldr r0, _08120418  @ =gUnknown_0200688E
	ldrh r1, [r0]
	ldr r2, _0812041C  @ =gUnknown_03002BA4
	ldrh r2, [r2]
	add r1, r1, r2
	ldr r3, _08120420  @ =gUnknown_03002B82
	ldrh r0, [r3]
	add r0, r0, #8
	sub r1, r1, r0
	ldr r4, _08120424  @ =gUnknown_03002B94
	strh r1, [r4]
	ldr r5, _08120428  @ =0x00001733
	add r0, r7, r5
	ldrb r5, [r0]
	lsl r5, r5, #4
	ldr r1, _0812042C  @ =0x0000097C
	add r0, r7, r1
	strb r5, [r0]
	mov r2, r10
	lsl r0, r2, #1
	add r5, r5, r0
	lsl r5, r5, #24
	lsr r3, r5, #24
	mov r10, r3
	ldr r6, _08120430  @ =gUnknown_03003E74
	ldrh r0, [r6]
	ldrh r1, [r4]
	mov r4, #150
	lsl r4, r4, #4
	add r4, r4, r7
	mov r9, r4
	ldrh r2, [r4]
	ldr r3, _08120434  @ =gUnknown_08180132
	mov r8, r3
	mov r3, r10
	add r3, r3, r8
	ldrb r3, [r3]
	ldr r4, _08120438  @ =gUnknown_08180152
	add r4, r4, r10
	ldrb r4, [r4]
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
	mov r0, #151
	lsl r0, r0, #4
	add r2, r7, r0
	ldr r0, _0812043C  @ =gUnknown_02006890
	ldrh r1, [r0]
	ldrh r2, [r2]
	add r1, r1, r2
	ldr r0, _08120440  @ =gUnknown_08180172
	lsr r5, r5, #24
	add r0, r5, r0
	ldrh r0, [r0]
	add r0, r0, r1
	ldr r2, _08120444  @ =0x00000958
	add r1, r7, r2
	ldrh r1, [r1]
	sub r0, r0, r1
	mov r3, r9
	strh r0, [r3]
	ldr r4, _08120418  @ =gUnknown_0200688E
	ldrh r1, [r4]
	ldr r0, _0812041C  @ =gUnknown_03002BA4
	ldrh r0, [r0]
	add r1, r1, r0
	ldr r0, _08120448  @ =gUnknown_08180192
	add r5, r5, r0
	ldrh r0, [r5]
	add r0, r0, r1
	ldr r2, _08120420  @ =gUnknown_03002B82
	ldrh r1, [r2]
	sub r0, r0, r1
	ldr r3, _08120424  @ =gUnknown_03002B94
	strh r0, [r3]
	ldrh r0, [r6]
	ldrh r1, [r3]
	mov r4, r9
	ldrh r2, [r4]
	mov r4, r10
	add r4, r4, #1
	add r8, r8, r4
	mov r5, r8
	ldrb r3, [r5]
	ldr r5, _08120438  @ =gUnknown_08180152
	add r4, r4, r5
	ldrb r4, [r4]
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C1918
	lsl r0, r0, #24
	lsr r0, r0, #24
	strh r0, [r6]
	mov r5, r9
	ldrb r0, [r5]
	cmp r0, #240
	bhi _0812044C
	ldr r1, _08120424  @ =gUnknown_03002B94
	ldrb r0, [r1]
	cmp r0, #240
	bhi _0812044C
	mov r0, #1
	b _0812044E
	.byte 0x00
	.byte 0x00
_08120410:
	.4byte 0x00000968
_08120414:
	.4byte 0x00000974
_08120418:
	.4byte gUnknown_0200688E
_0812041C:
	.4byte gUnknown_03002BA4
_08120420:
	.4byte gUnknown_03002B82
_08120424:
	.4byte gUnknown_03002B94
_08120428:
	.4byte 0x00001733
_0812042C:
	.4byte 0x0000097C
_08120430:
	.4byte gUnknown_03003E74
_08120434:
	.4byte gUnknown_08180132
_08120438:
	.4byte gUnknown_08180152
_0812043C:
	.4byte gUnknown_02006890
_08120440:
	.4byte gUnknown_08180172
_08120444:
	.4byte 0x00000958
_08120448:
	.4byte gUnknown_08180192
_0812044C:
	mov r0, #0
_0812044E:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08120278

	.byte 0x00
	.byte 0x00
