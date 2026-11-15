	THUMB_FUNC_START sub_080C6004
sub_080C6004: @ 0x080C6004
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r4, [sp, #24]
	lsl r0, r0, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	lsl r3, r3, #16
	lsr r5, r3, #16
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r12, r4
	lsr r0, r0, #13
	ldr r4, _080C614C  @ =gUnknown_03002780
	mov r8, r4
	add r7, r0, r4
	ldr r0, _080C6150  @ =0x000001FF
	add r6, r0, #0
	and r1, r1, r6
	ldrh r4, [r7, #2]
	ldr r0, _080C6154  @ =0xFFFFFE00
	and r0, r0, r4
	orr r0, r0, r1
	strh r0, [r7, #2]
	strb r2, [r7]
	and r5, r5, r6
	ldrh r1, [r7, #4]
	ldr r0, _080C6158  @ =0xFFFFFC00
	and r0, r0, r1
	orr r0, r0, r5
	strh r0, [r7, #4]
	mov r4, #1
	lsr r1, r3, #31
	lsl r1, r1, #5
	ldrb r2, [r7, #3]
	mov r0, #33
	neg r0, r0
	and r0, r0, r2
	orr r0, r0, r1
	lsr r1, r3, #30
	and r1, r1, r4
	lsl r1, r1, #4
	mov r2, #17
	neg r2, r2
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r7, #3]
	lsr r1, r3, #25
	mov r0, #7
	and r1, r1, r0
	lsl r1, r1, #4
	ldrb r2, [r7, #5]
	mov r0, #15
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r7, #5]
	lsr r3, r3, #28
	mov r1, #3
	and r3, r3, r1
	lsr r2, r0, #4
	ldr r0, _080C615C  @ =gUnknown_081720D0
	add r3, r3, r0
	ldrb r1, [r3]
	ldr r3, _080C6160  @ =0x00000484
	add r8, r8, r3
	mov r4, r8
	ldrb r0, [r4]
	cmp r0, #179
	bne _080C60A0
	mov r0, #4
	and r2, r2, r0
	cmp r2, #0
	bne _080C60A0
	cmp r1, #1
	bls _080C60A0
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
_080C60A0:
	mov r4, #3
	and r1, r1, r4
	lsl r1, r1, #2
	ldrb r0, [r7, #5]
	mov r5, #13
	neg r5, r5
	add r6, r5, #0
	and r6, r6, r0
	orr r6, r6, r1
	strb r6, [r7, #5]
	mov r0, r12
	lsr r2, r0, #3
	and r2, r2, r4
	lsl r2, r2, #6
	ldrb r3, [r7, #1]
	mov r0, #63
	add r1, r0, #0
	and r1, r1, r3
	orr r1, r1, r2
	mov r3, r12
	lsr r2, r3, #1
	and r2, r2, r4
	lsl r2, r2, #6
	ldrb r3, [r7, #3]
	and r0, r0, r3
	orr r0, r0, r2
	strb r0, [r7, #3]
	mov r0, #4
	neg r0, r0
	and r1, r1, r0
	and r1, r1, r5
	sub r0, r0, #13
	and r1, r1, r0
	sub r0, r0, #16
	and r1, r1, r0
	strb r1, [r7, #1]
	ldr r5, _080C6164  @ =gRam
	ldr r0, _080C6168  @ =0x000015DC
	add r4, r5, r0
	ldrb r1, [r4]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080C613E
	ldr r1, _080C616C  @ =0x000010C2
	add r0, r5, r1
	ldrb r3, [r4]
	add r0, r0, r3
	ldrb r3, [r0]
	cmp r3, #0
	beq _080C613E
	ldrh r2, [r7, #2]
	lsl r1, r2, #23
	lsr r1, r1, #23
	mov r0, #1
	and r0, r0, r3
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r3, _080C6150  @ =0x000001FF
	add r0, r3, #0
	and r1, r1, r0
	ldr r0, _080C6154  @ =0xFFFFFE00
	and r0, r0, r2
	orr r0, r0, r1
	strh r0, [r7, #2]
	ldr r1, _080C6170  @ =0x00000D94
	add r0, r5, r1
	ldrb r4, [r4]
	add r0, r0, r4
	ldrb r1, [r0]
	mov r0, #14
	and r0, r0, r1
	cmp r0, #0
	beq _080C613E
	mov r0, #15
	and r6, r6, r0
	mov r0, #128
	orr r6, r6, r0
	strb r6, [r7, #5]
_080C613E:
	add r0, r7, #0
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C614C:
	.4byte gUnknown_03002780
_080C6150:
	.4byte 0x000001FF
_080C6154:
	.4byte 0xFFFFFE00
_080C6158:
	.4byte 0xFFFFFC00
_080C615C:
	.4byte gUnknown_081720D0
_080C6160:
	.4byte 0x00000484
_080C6164:
	.4byte gRam
_080C6168:
	.4byte 0x000015DC
_080C616C:
	.4byte 0x000010C2
_080C6170:
	.4byte 0x00000D94
	THUMB_FUNC_END sub_080C6004

