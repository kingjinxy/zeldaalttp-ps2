	THUMB_FUNC_START sub_0812218C
sub_0812218C: @ 0x0812218C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080C177C
	ldr r4, _08122234  @ =gRam
	ldr r1, _08122238  @ =0x00000E29
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _081221CC
	ldr r2, _0812223C  @ =0x00000E47
	add r0, r4, r2
	add r0, r5, r0
	mov r3, #161
	lsl r3, r3, #4
	add r2, r4, r3
	ldrb r1, [r2]
	strb r1, [r0]
	ldrb r3, [r2]
	ldr r0, _08122240  @ =gUnknown_081803CA
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r7, _08122244  @ =0x00001724
	add r0, r4, r7
	strb r1, [r0]
_081221CC:
	ldr r1, _08122248  @ =0x00000A74
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _081221E0
	ldr r2, _08122244  @ =0x00001724
	add r1, r4, r2
	mov r0, #48
	strb r0, [r1]
_081221E0:
	ldr r3, _0812224C  @ =0x000009AD
	add r0, r4, r3
	ldrb r0, [r0]
	mov r8, r4
	cmp r0, #0
	bne _0812227E
	ldr r0, _08122250  @ =0x00001844
	add r0, r0, r8
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0812227E
	ldr r0, _08122254  @ =0x00001832
	add r0, r0, r8
	add r1, r5, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0812227E
	ldr r0, _08122258  @ =0x00001827
	add r0, r0, r8
	add r0, r5, r0
	ldrb r3, [r0]
	ldr r0, _0812225C  @ =gUnknown_081803C8
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08122260  @ =0x00001837
	add r0, r0, r8
	add r0, r5, r0
	ldrb r3, [r0]
	ldr r0, _08122264  @ =0x0000183C
	add r0, r0, r8
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08122268
	sub r0, r3, #1
	b _0812226A
	.byte 0x00
	.byte 0x00
_08122234:
	.4byte gRam
_08122238:
	.4byte 0x00000E29
_0812223C:
	.4byte 0x00000E47
_08122240:
	.4byte gUnknown_081803CA
_08122244:
	.4byte 0x00001724
_08122248:
	.4byte 0x00000A74
_0812224C:
	.4byte 0x000009AD
_08122250:
	.4byte 0x00001844
_08122254:
	.4byte 0x00001832
_08122258:
	.4byte 0x00001827
_0812225C:
	.4byte gUnknown_081803C8
_08122260:
	.4byte 0x00001837
_08122264:
	.4byte 0x0000183C
_08122268:
	add r0, r3, #1
_0812226A:
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r0, _08122358  @ =gRam
	ldr r4, _0812235C  @ =0x00001837
	add r1, r0, r4
	add r1, r5, r1
	mov r2, #3
	and r3, r3, r2
	strb r3, [r1]
	mov r8, r0
_0812227E:
	mov r4, r8
	ldr r7, _08122360  @ =0x00001827
	add r0, r4, r7
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	ldr r1, _08122364  @ =0x00001732
	add r1, r1, r4
	mov r12, r1
	mov r1, #0
	mov r2, r12
	strb r0, [r2]
	ldr r3, _0812235C  @ =0x00001837
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r6, r0, #26
	lsr r3, r6, #24
	sub r7, r7, #243
	add r0, r4, r7
	strb r1, [r0]
	ldr r0, _08122368  @ =0x00001735
	add r0, r0, r4
	mov r9, r0
	strb r1, [r0]
	ldr r2, _0812236C  @ =gUnknown_081803B4
	add r0, r3, #0
	add r0, r0, r2
	mov r7, #150
	lsl r7, r7, #4
	add r1, r4, r7
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r7, [r1]
	add r0, r0, r7
	strh r0, [r1]
	add r0, r3, #2
	add r0, r0, r2
	ldr r2, _08122370  @ =0x00000964
	add r1, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r3, [r1]
	add r0, r0, r3
	strh r0, [r1]
	ldr r7, _08122374  @ =0x00000968
	add r1, r4, r7
	strh r0, [r1]
	ldr r1, _08122378  @ =0x00001844
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08122302
	ldr r2, _0812237C  @ =gUnknown_03003E74
	ldr r1, _08122380  @ =gUnknown_081803C4
	ldr r3, _08122384  @ =0x000015F7
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	lsr r0, r0, #2
	strh r0, [r2]
_08122302:
	lsr r4, r6, #26
	mov r7, r12
	ldrb r7, [r7]
	add r4, r4, r7
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r5, sp
	add r5, r5, #6
	add r0, sp, #4
	add r1, r5, #0
	bl sub_080C1820
	ldr r0, _0812237C  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r1, sp, #4
	ldrh r1, [r1]
	ldrh r2, [r5]
	ldr r3, _08122388  @ =gUnknown_081803AC
	add r4, r4, r3
	ldrb r4, [r4]
	mov r3, #207
	and r3, r3, r4
	ldr r4, _0812238C  @ =0x00001724
	add r4, r4, r8
	ldrb r4, [r4]
	orr r3, r3, r4
	lsl r3, r3, #8
	mov r4, #70
	orr r3, r3, r4
	mov r4, r9
	ldrb r5, [r4]
	mov r4, #2
	orr r4, r4, r5
	str r4, [sp]
	bl sub_080C6368
	add sp, sp, #8
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_08122358:
	.4byte gRam
_0812235C:
	.4byte 0x00001837
_08122360:
	.4byte 0x00001827
_08122364:
	.4byte 0x00001732
_08122368:
	.4byte 0x00001735
_0812236C:
	.4byte gUnknown_081803B4
_08122370:
	.4byte 0x00000964
_08122374:
	.4byte 0x00000968
_08122378:
	.4byte 0x00001844
_0812237C:
	.4byte gUnknown_03003E74
_08122380:
	.4byte gUnknown_081803C4
_08122384:
	.4byte 0x000015F7
_08122388:
	.4byte gUnknown_081803AC
_0812238C:
	.4byte 0x00001724
	THUMB_FUNC_END sub_0812218C

