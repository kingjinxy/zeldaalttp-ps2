	THUMB_FUNC_START sub_0807AF50
sub_0807AF50: @ 0x0807AF50
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r4, _0807AF6C  @ =gRam
	mov r1, #172
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _0807AF70
	bl sub_0807AA0C
	add r2, r0, #0
	b _0807AF96
_0807AF6C:
	.4byte gRam
_0807AF70:
	ldr r2, _0807B03C  @ =0x00001605
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
	bl sub_0807AB2C
	ldr r3, _0807B040  @ =0x00000AC2
	add r2, r4, r3
	ldrh r0, [r2]
	mov r6, #136
	lsl r6, r6, #6
	add r1, r0, r6
	add r0, r1, #0
	strh r0, [r2]
	mov r0, #128
	lsl r0, r0, #9
	and r1, r1, r0
	neg r1, r1
	lsr r2, r1, #31
_0807AF96:
	ldr r4, _0807B044  @ =gRam
	ldr r1, _0807B048  @ =0x0000179C
	add r0, r4, r1
	mov r7, #0
	mov r3, #0
	mov r8, r3
	strh r2, [r0]
	ldr r6, _0807B04C  @ =0x00000AC8
	add r5, r4, r6
	ldrh r0, [r5]
	add r3, r0, r2
	strh r3, [r5]
	ldr r1, _0807B050  @ =0x00000952
	add r0, r4, r1
	ldrh r0, [r0]
	add r0, r3, r0
	mov r6, #149
	lsl r6, r6, #4
	add r1, r4, r6
	strh r0, [r1]
	lsl r0, r2, #16
	cmp r0, #0
	beq _0807B030
	ldr r6, _0807B054  @ =gUnknown_08167924
	ldr r1, _0807B058  @ =0x00000AC4
	add r0, r4, r1
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	lsl r1, r3, #16
	asr r1, r1, #16
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r1, r0
	blt _0807B030
	bl sub_0807AAC4
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	mov r3, #0
	ldrsh r1, [r5, r3]
	mov r6, #0
	ldrsh r0, [r0, r6]
	cmp r1, r0
	blt _0807B030
	ldr r0, _0807B05C  @ =0x00000504
	add r1, r4, r0
	mov r0, #123
	bl sub_0812A324
	ldr r2, _0807B060  @ =0x00000A3E
	add r1, r4, r2
	mov r0, #255
	strb r0, [r1]
	ldr r3, _0807B064  @ =0x0000097C
	add r0, r4, r3
	mov r6, #0
	ldrsh r0, [r0, r6]
	sub r2, r2, #88
	add r1, r4, r2
	add r0, r0, r1
	strb r7, [r0]
	ldr r3, _0807B03C  @ =0x00001605
	add r0, r4, r3
	strb r7, [r0]
	ldr r6, _0807B068  @ =0x00001770
	add r0, r4, r6
	strb r7, [r0]
	ldr r1, _0807B06C  @ =0x00000A2A
	add r0, r4, r1
	mov r2, r8
	strh r2, [r0]
	ldr r3, _0807B070  @ =0x00000A28
	add r0, r4, r3
	strh r2, [r0]
_0807B030:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807B03C:
	.4byte 0x00001605
_0807B040:
	.4byte 0x00000AC2
_0807B044:
	.4byte gRam
_0807B048:
	.4byte 0x0000179C
_0807B04C:
	.4byte 0x00000AC8
_0807B050:
	.4byte 0x00000952
_0807B054:
	.4byte gUnknown_08167924
_0807B058:
	.4byte 0x00000AC4
_0807B05C:
	.4byte 0x00000504
_0807B060:
	.4byte 0x00000A3E
_0807B064:
	.4byte 0x0000097C
_0807B068:
	.4byte 0x00001770
_0807B06C:
	.4byte 0x00000A2A
_0807B070:
	.4byte 0x00000A28
	THUMB_FUNC_END sub_0807AF50

