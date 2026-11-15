	THUMB_FUNC_START sub_0807C8B4
sub_0807C8B4: @ 0x0807C8B4
	push {r4,r5,lr}
	ldr r0, _0807C904  @ =gRam
	ldr r2, _0807C908  @ =0x000009E7
	add r1, r0, r2
	ldrb r1, [r1]
	add r4, r0, #0
	cmp r1, #27
	bne _0807C928
	ldr r5, _0807C90C  @ =0x000009DA
	add r0, r4, r5
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r1, _0807C910  @ =gUnknown_02002000
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _0807C920
	ldr r2, _0807C914  @ =0x00000AEC
	add r3, r4, r2
	ldrh r2, [r3]
	lsl r1, r2, #1
	ldr r5, _0807C918  @ =0x00000C2A
	add r0, r4, r5
	add r1, r1, r0
	mov r5, #151
	lsl r5, r5, #4
	add r0, r4, r5
	ldrh r0, [r0]
	lsl r0, r0, #16
	asr r0, r0, #17
	strh r0, [r1]
	add r2, r2, #1
	strh r2, [r3]
	ldr r1, _0807C91C  @ =0x00000AEE
	add r0, r4, r1
	strh r2, [r0]
	b _0807C95A
_0807C904:
	.4byte gRam
_0807C908:
	.4byte 0x000009E7
_0807C90C:
	.4byte 0x000009DA
_0807C910:
	.4byte gUnknown_02002000
_0807C914:
	.4byte 0x00000AEC
_0807C918:
	.4byte 0x00000C2A
_0807C91C:
	.4byte 0x00000AEE
_0807C920:
	ldr r2, _0807C960  @ =0x00001812
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
_0807C928:
	ldr r5, _0807C964  @ =0x00000AEA
	add r3, r4, r5
	ldrh r2, [r3]
	lsl r1, r2, #1
	ldr r5, _0807C968  @ =0x00000C2A
	add r0, r4, r5
	add r1, r1, r0
	mov r5, #151
	lsl r5, r5, #4
	add r0, r4, r5
	ldrh r0, [r0]
	lsl r0, r0, #16
	asr r0, r0, #17
	strh r0, [r1]
	add r2, r2, #1
	strh r2, [r3]
	ldr r1, _0807C96C  @ =0x000009DA
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #22
	bne _0807C95A
	ldr r2, _0807C960  @ =0x00001812
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
_0807C95A:
	pop {r4,r5}
	pop {r0}
	bx r0
_0807C960:
	.4byte 0x00001812
_0807C964:
	.4byte 0x00000AEA
_0807C968:
	.4byte 0x00000C2A
_0807C96C:
	.4byte 0x000009DA
	THUMB_FUNC_END sub_0807C8B4

