	THUMB_FUNC_START sub_0808AF98
sub_0808AF98: @ 0x0808AF98
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r4, _0808B0AC  @ =gRam
	ldr r0, _0808B0B0  @ =0x00000968
	add r5, r4, r0
	mov r0, #0
	strh r0, [r5]
	ldr r1, _0808B0B4  @ =0x00000BF4
	add r0, r4, r1
	ldr r2, _0808B0B8  @ =0x00000958
	add r1, r4, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	mov r3, #189
	lsl r3, r3, #4
	add r1, r4, r3
	strh r0, [r1]
	ldr r6, _0808B0BC  @ =0x00000BF2
	add r0, r4, r6
	ldr r7, _0808B0C0  @ =0x00000952
	add r1, r4, r7
	ldrh r2, [r0]
	ldrh r0, [r1]
	sub r2, r2, r0
	ldr r1, _0808B0C4  @ =0x00000BC8
	add r0, r4, r1
	strh r2, [r0]
	add r3, r3, #40
	add r0, r4, r3
	ldrh r3, [r0]
	mov r0, #1
	eor r3, r3, r0
	ldr r6, _0808B0C8  @ =0x0000097C
	add r0, r4, r6
	strh r3, [r0]
	add r0, r3, r2
	add r7, r7, #18
	add r1, r4, r7
	strh r0, [r1]
	sub r2, r2, r3
	mov r1, #255
	and r2, r2, r1
	mov r3, #150
	lsl r3, r3, #4
	add r1, r4, r3
	strh r2, [r1]
	mov r1, #255
	and r0, r0, r1
	lsl r0, r0, #8
	orr r0, r0, r2
	sub r6, r6, #4
	add r1, r4, r6
	strh r0, [r1]
	add r6, r4, #0
	ldr r7, _0808B0CC  @ =0x00000BD4
	add r3, r6, r7
	ldr r2, _0808B0D0  @ =gUnknown_02001600
_0808B00E:
	ldrh r0, [r5]
	lsl r0, r0, #17
	asr r0, r0, #16
	add r0, r0, r2
	mov r1, #240
	strh r1, [r0]
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
	lsl r0, r0, #16
	asr r0, r0, #16
	mov r4, #0
	ldrsh r1, [r3, r4]
	cmp r0, r1
	bne _0808B00E
	ldr r5, _0808B0C8  @ =0x0000097C
	add r0, r6, r5
	ldrh r3, [r0]
	add r3, r3, #1
	ldr r7, _0808B0D4  @ =0x00000978
	add r4, r6, r7
	strh r3, [r4]
	ldr r1, _0808B0C4  @ =0x00000BC8
	add r0, r6, r1
	ldrh r1, [r0]
	add r0, r3, r1
	sub r5, r5, #24
	add r2, r6, r5
	strh r0, [r2]
	sub r1, r1, r3
	mov r2, #255
	and r1, r1, r2
	sub r7, r7, #24
	add r2, r6, r7
	strh r1, [r2]
	mov r2, #255
	and r0, r0, r2
	lsl r0, r0, #8
	orr r0, r0, r1
	ldr r1, _0808B0D8  @ =0x00000974
	add r2, r6, r1
	strh r0, [r2]
	ldr r3, _0808B0DC  @ =0x00000975
	add r0, r6, r3
	ldrb r0, [r0]
	strb r0, [r4]
	ldrb r1, [r2]
	add r5, r5, #21
	add r0, r6, r5
	strb r1, [r0]
	ldr r7, _0808B0CC  @ =0x00000BD4
	add r1, r6, r7
	ldr r3, _0808B0E0  @ =0x00000BF6
	add r0, r6, r3
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	mov r1, #1
	eor r0, r0, r1
	strh r0, [r2]
	ldr r7, _0808B0B0  @ =0x00000968
	add r5, r6, r7
	mov r12, r2
	ldr r2, _0808B0E4  @ =0x000001BF
	ldr r0, _0808B0E8  @ =0x0000FFFF
	mov r8, r0
_0808B092:
	ldrh r3, [r5]
	mov r6, #0
	ldrsh r1, [r5, r6]
	mov r7, r12
	mov r6, #0
	ldrsh r0, [r7, r6]
	cmp r1, r0
	blt _0808B0F0
	lsl r0, r3, #17
	lsr r3, r0, #16
	ldr r1, _0808B0EC  @ =0x0000F0FC
	b _0808B100
	.byte 0x00
	.byte 0x00
_0808B0AC:
	.4byte gRam
_0808B0B0:
	.4byte 0x00000968
_0808B0B4:
	.4byte 0x00000BF4
_0808B0B8:
	.4byte 0x00000958
_0808B0BC:
	.4byte 0x00000BF2
_0808B0C0:
	.4byte 0x00000952
_0808B0C4:
	.4byte 0x00000BC8
_0808B0C8:
	.4byte 0x0000097C
_0808B0CC:
	.4byte 0x00000BD4
_0808B0D0:
	.4byte gUnknown_02001600
_0808B0D4:
	.4byte 0x00000978
_0808B0D8:
	.4byte 0x00000974
_0808B0DC:
	.4byte 0x00000975
_0808B0E0:
	.4byte 0x00000BF6
_0808B0E4:
	.4byte 0x000001BF
_0808B0E8:
	.4byte 0x0000FFFF
_0808B0EC:
	.4byte 0x0000F0FC
_0808B0F0:
	lsl r0, r3, #17
	lsr r1, r0, #16
	add r3, r1, #0
	lsl r0, r1, #16
	asr r0, r0, #16
	cmp r0, r2
	bgt _0808B100
	ldrh r1, [r4]
_0808B100:
	cmp r1, r8
	bne _0808B106
	ldr r1, _0808B128  @ =0x0000F0FC
_0808B106:
	lsl r0, r3, #16
	asr r0, r0, #16
	ldr r7, _0808B12C  @ =gUnknown_02001600
	add r0, r0, r7
	strh r1, [r0]
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, #192
	ble _0808B092
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0808B128:
	.4byte 0x0000F0FC
_0808B12C:
	.4byte gUnknown_02001600
	THUMB_FUNC_END sub_0808AF98

