	THUMB_FUNC_START sub_0807B33C
sub_0807B33C: @ 0x0807B33C
	push {r4,r5,lr}
	ldr r5, _0807B390  @ =gRam
	ldr r1, _0807B394  @ =0x00000AA8
	add r0, r5, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0807B388
	ldr r2, _0807B398  @ =0x00000B62
	add r1, r5, r2
	mov r4, #0
	mov r2, #0
	mov r0, #18
	strh r0, [r1]
	ldr r1, _0807B39C  @ =0x000009F4
	add r0, r5, r1
	strh r2, [r0]
	sub r1, r1, #12
	add r0, r5, r1
	strh r2, [r0]
	mov r0, #123
	mov r1, #0
	bl sub_0812A324
	ldr r2, _0807B3A0  @ =0x000009AD
	add r1, r5, r2
	mov r0, #3
	strb r0, [r1]
	ldr r1, _0807B3A4  @ =0x0000097C
	add r0, r5, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	ldr r2, _0807B3A8  @ =0x000009E6
	add r1, r5, r2
	add r0, r0, r1
	strb r4, [r0]
_0807B388:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807B390:
	.4byte gRam
_0807B394:
	.4byte 0x00000AA8
_0807B398:
	.4byte 0x00000B62
_0807B39C:
	.4byte 0x000009F4
_0807B3A0:
	.4byte 0x000009AD
_0807B3A4:
	.4byte 0x0000097C
_0807B3A8:
	.4byte 0x000009E6
	THUMB_FUNC_END sub_0807B33C

