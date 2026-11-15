	THUMB_FUNC_START sub_0811E7A8
sub_0811E7A8: @ 0x0811E7A8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _0811E8B0  @ =gRam
	ldr r2, _0811E8B4  @ =0x00000BC4
	add r0, r1, r2
	mov r2, #0
	strb r2, [r0]
	ldr r3, _0811E8B8  @ =0x00001871
	add r0, r1, r3
	add r0, r5, r0
	strb r2, [r0]
	mov r4, #6
	mov r9, r4
	add r6, r1, #0
	add r7, r0, #0
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r6
	mov r10, r0
	ldr r1, _0811E8BC  @ =0x00000A74
	add r0, r6, r1
	add r0, r0, r5
	mov r8, r0
_0811E7E2:
	ldr r2, _0811E8C0  @ =0x00000DC5
	add r0, r6, r2
	add r0, r5, r0
	ldrb r2, [r0]
	ldr r3, _0811E8C4  @ =0x00000DD9
	add r0, r6, r3
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _0811E8C8  @ =gUnknown_0817FA9C
	mov r4, r9
	lsr r3, r4, #1
	lsl r3, r3, #1
	add r0, r3, r0
	orr r2, r2, r1
	ldrh r0, [r0]
	add r2, r2, r0
	mov r0, r10
	strh r2, [r0]
	ldr r1, _0811E8CC  @ =0x00001732
	add r0, r6, r1
	strb r2, [r0]
	ldr r2, _0811E8D0  @ =0x00001733
	add r1, r6, r2
	mov r4, r10
	mov r2, #0
	ldrsh r0, [r4, r2]
	mov r4, #255
	lsl r4, r4, #8
	and r0, r0, r4
	asr r0, r0, #8
	strb r0, [r1]
	ldr r1, _0811E8D4  @ =0x00000DCF
	add r0, r6, r1
	add r0, r5, r0
	ldrb r2, [r0]
	ldr r4, _0811E8D8  @ =0x00000DE3
	add r0, r6, r4
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _0811E8DC  @ =gUnknown_0817FAA4
	add r3, r3, r0
	orr r2, r2, r1
	ldrh r3, [r3]
	add r2, r2, r3
	ldr r0, _0811E8E0  @ =0x00000964
	add r1, r6, r0
	strh r2, [r1]
	ldr r3, _0811E8E4  @ =0x00001734
	add r0, r6, r3
	strb r2, [r0]
	ldr r4, _0811E8E8  @ =0x00001735
	add r2, r6, r4
	mov r3, #0
	ldrsh r0, [r1, r3]
	mov r4, #255
	lsl r4, r4, #8
	and r0, r0, r4
	asr r0, r0, #8
	strb r0, [r2]
	mov r0, r8
	ldrb r4, [r0]
	add r0, r5, #0
	mov r1, sp
	bl sub_080BFCAC
	mov r1, r8
	strb r4, [r1]
	ldr r2, _0811E8EC  @ =0x0000187A
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #35
	blt _0811E890
	cmp r0, #37
	ble _0811E88A
	cmp r0, #59
	bne _0811E890
	ldr r3, _0811E8F0  @ =0x000009DA
	add r0, r6, r3
	ldrh r0, [r0]
	cmp r0, #189
	beq _0811E890
_0811E88A:
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
_0811E890:
	mov r0, r9
	sub r0, r0, #2
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r9, r4
	cmp r0, #0
	bge _0811E7E2
	ldr r0, _0811E8B0  @ =gRam
	ldr r1, _0811E8B8  @ =0x00001871
	add r0, r0, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #4
	beq _0811E8F4
	mov r0, #1
	b _0811E8F6
_0811E8B0:
	.4byte gRam
_0811E8B4:
	.4byte 0x00000BC4
_0811E8B8:
	.4byte 0x00001871
_0811E8BC:
	.4byte 0x00000A74
_0811E8C0:
	.4byte 0x00000DC5
_0811E8C4:
	.4byte 0x00000DD9
_0811E8C8:
	.4byte gUnknown_0817FA9C
_0811E8CC:
	.4byte 0x00001732
_0811E8D0:
	.4byte 0x00001733
_0811E8D4:
	.4byte 0x00000DCF
_0811E8D8:
	.4byte 0x00000DE3
_0811E8DC:
	.4byte gUnknown_0817FAA4
_0811E8E0:
	.4byte 0x00000964
_0811E8E4:
	.4byte 0x00001734
_0811E8E8:
	.4byte 0x00001735
_0811E8EC:
	.4byte 0x0000187A
_0811E8F0:
	.4byte 0x000009DA
_0811E8F4:
	mov r0, #0
_0811E8F6:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0811E7A8

	.byte 0x00
	.byte 0x00
