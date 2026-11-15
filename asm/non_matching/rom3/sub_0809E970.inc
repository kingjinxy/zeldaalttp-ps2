	THUMB_FUNC_START sub_0809E970
sub_0809E970: @ 0x0809E970
	push {r4,lr}
	ldr r0, _0809EA28  @ =gRam
	ldr r2, _0809EA2C  @ =0x00000978
	add r1, r0, r2
	mov r3, #0
	mov r2, #0
	strh r2, [r1]
	ldr r4, _0809EA30  @ =0x0000097C
	add r1, r0, r4
	strh r2, [r1]
	ldr r4, _0809EA34  @ =0x000016E4
	add r1, r0, r4
	strh r2, [r1]
	add r4, r4, #47
	add r1, r0, r4
	strb r3, [r1]
	add r4, r4, #1
	add r1, r0, r4
	strb r3, [r1]
	add r4, r4, #49
	add r1, r0, r4
	strb r3, [r1]
	add r4, r4, #1
	add r1, r0, r4
	strb r3, [r1]
	sub r4, r4, #42
	add r1, r0, r4
	strh r2, [r1]
	add r4, r4, #5
	add r1, r0, r4
	strb r3, [r1]
	add r4, r4, #1
	add r1, r0, r4
	strb r3, [r1]
	add r4, r4, #138
	add r1, r0, r4
	strh r2, [r1]
	add r4, r4, #36
	add r1, r0, r4
	strh r2, [r1]
	add r4, r4, #2
	add r1, r0, r4
	strh r2, [r1]
	add r4, r4, #6
	add r1, r0, r4
	strh r2, [r1]
	add r4, r4, #4
	add r1, r0, r4
	strh r2, [r1]
	add r4, r4, #12
	add r1, r0, r4
	strh r2, [r1]
	add r4, r4, #2
	add r1, r0, r4
	strh r2, [r1]
	add r4, r4, #2
	add r1, r0, r4
	strh r2, [r1]
	add r4, r4, #12
	add r1, r0, r4
	strh r2, [r1]
	add r4, r4, #7
	add r1, r0, r4
	strb r3, [r1]
	add r4, r4, #1
	add r1, r0, r4
	strb r3, [r1]
	add r4, r4, #1
	add r1, r0, r4
	strb r3, [r1]
	add r4, r4, #1
	add r1, r0, r4
	strb r3, [r1]
	ldr r3, _0809EA38  @ =0x00001772
	add r1, r0, r3
	strh r2, [r1]
	sub r4, r4, #142
	add r1, r0, r4
	strh r2, [r1]
	add r3, r3, #10
	add r1, r0, r3
	strh r2, [r1]
	add r4, r4, #16
	add r1, r0, r4
	strh r2, [r1]
	ldr r1, _0809EA3C  @ =0x00001888
	add r0, r0, r1
	strh r2, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809EA28:
	.4byte gRam
_0809EA2C:
	.4byte 0x00000978
_0809EA30:
	.4byte 0x0000097C
_0809EA34:
	.4byte 0x000016E4
_0809EA38:
	.4byte 0x00001772
_0809EA3C:
	.4byte 0x00001888
	THUMB_FUNC_END sub_0809E970

