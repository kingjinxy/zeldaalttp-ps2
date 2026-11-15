	THUMB_FUNC_START sub_0807B2D0
sub_0807B2D0: @ 0x0807B2D0
	push {r4,r5,lr}
	mov r2, #0
	ldr r5, _0807B320  @ =gRam
	ldr r1, _0807B324  @ =0x00000AA8
	add r0, r5, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0807B31A
	ldr r1, _0807B328  @ =0x00000B62
	add r0, r5, r1
	mov r4, #0
	strh r2, [r0]
	ldr r1, _0807B32C  @ =0x000009F4
	add r0, r5, r1
	strh r2, [r0]
	sub r1, r1, #12
	add r0, r5, r1
	strh r2, [r0]
	mov r0, #123
	mov r1, #0
	bl sub_0812A324
	ldr r2, _0807B330  @ =0x000009AD
	add r1, r5, r2
	mov r0, #3
	strb r0, [r1]
	ldr r1, _0807B334  @ =0x0000097C
	add r0, r5, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	ldr r2, _0807B338  @ =0x000009E6
	add r1, r5, r2
	add r0, r0, r1
	strb r4, [r0]
_0807B31A:
	pop {r4,r5}
	pop {r0}
	bx r0
_0807B320:
	.4byte gRam
_0807B324:
	.4byte 0x00000AA8
_0807B328:
	.4byte 0x00000B62
_0807B32C:
	.4byte 0x000009F4
_0807B330:
	.4byte 0x000009AD
_0807B334:
	.4byte 0x0000097C
_0807B338:
	.4byte 0x000009E6
	THUMB_FUNC_END sub_0807B2D0

