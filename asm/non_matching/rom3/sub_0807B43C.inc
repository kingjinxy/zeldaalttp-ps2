	THUMB_FUNC_START sub_0807B43C
sub_0807B43C: @ 0x0807B43C
	push {r4,lr}
	ldr r4, _0807B494  @ =gRam
	ldr r1, _0807B498  @ =0x0000097C
	add r0, r4, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	ldr r2, _0807B49C  @ =0x000009E6
	add r1, r4, r2
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #10
	bhi _0807B4A8
	bl sub_080CAEC0
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0807B4C2
	mov r0, #177
	lsl r0, r0, #4
	add r2, r4, r0
	ldrh r0, [r2]
	cmp r0, #0
	beq _0807B4C2
	mov r1, #0
	strh r1, [r2]
	mov r2, #192
	lsl r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r0, _0807B4A0  @ =0x00000504
	add r1, r4, r0
	mov r0, #123
	bl sub_0812A324
	ldr r2, _0807B4A4  @ =0x000009AD
	add r1, r4, r2
	mov r0, #5
	strb r0, [r1]
	b _0807B4C2
	.byte 0x00
	.byte 0x00
_0807B494:
	.4byte gRam
_0807B498:
	.4byte 0x0000097C
_0807B49C:
	.4byte 0x000009E6
_0807B4A0:
	.4byte 0x00000504
_0807B4A4:
	.4byte 0x000009AD
_0807B4A8:
	cmp r0, #40
	bhi _0807B4B2
	bl sub_0807B3AC
	b _0807B4C2
_0807B4B2:
	bl sub_080CAEC0
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0807B4C2
	bl sub_0807A478
_0807B4C2:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0807B43C

