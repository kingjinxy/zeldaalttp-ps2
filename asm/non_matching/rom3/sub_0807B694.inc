	THUMB_FUNC_START sub_0807B694
sub_0807B694: @ 0x0807B694
	push {r4,r5,lr}
	ldr r4, _0807B6E4  @ =gRam
	ldr r1, _0807B6E8  @ =0x000016C5
	add r0, r4, r1
	ldrb r1, [r0]
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0807B6DE
	ldr r1, _0807B6EC  @ =0x000016C1
	add r0, r4, r1
	ldrb r1, [r0]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0807B6DE
	ldr r1, _0807B6F0  @ =0x0000097C
	add r0, r4, r1
	mov r1, #0
	ldrsh r5, [r0, r1]
	bl sub_080CAEC0
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0807B6DE
	ldr r0, _0807B6F4  @ =0x00000504
	add r1, r4, r0
	mov r0, #123
	bl sub_0812A324
	ldr r1, _0807B6F8  @ =0x000009E6
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
_0807B6DE:
	pop {r4,r5}
	pop {r0}
	bx r0
_0807B6E4:
	.4byte gRam
_0807B6E8:
	.4byte 0x000016C5
_0807B6EC:
	.4byte 0x000016C1
_0807B6F0:
	.4byte 0x0000097C
_0807B6F4:
	.4byte 0x00000504
_0807B6F8:
	.4byte 0x000009E6
	THUMB_FUNC_END sub_0807B694

