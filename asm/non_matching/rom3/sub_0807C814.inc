	THUMB_FUNC_START sub_0807C814
sub_0807C814: @ 0x0807C814
	push {r4,r5,lr}
	ldr r0, _0807C84C  @ =gRam
	ldr r2, _0807C850  @ =0x000009E7
	add r1, r0, r2
	ldrb r1, [r1]
	add r4, r0, #0
	cmp r1, #27
	bne _0807C878
	ldr r5, _0807C854  @ =0x000009DA
	add r0, r4, r5
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r1, _0807C858  @ =gUnknown_02002000
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r1, #0
	bne _0807C860
	add r2, r2, #211
	add r0, r4, r2
	strh r1, [r0]
	ldr r5, _0807C85C  @ =0x00000B46
	add r3, r4, r5
	b _0807C87C
_0807C84C:
	.4byte gRam
_0807C850:
	.4byte 0x000009E7
_0807C854:
	.4byte 0x000009DA
_0807C858:
	.4byte gUnknown_02002000
_0807C85C:
	.4byte 0x00000B46
_0807C860:
	ldr r0, _0807C8A0  @ =0x000009D3
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
	ldr r2, _0807C8A4  @ =0x000009D4
	add r1, r4, r2
	mov r0, #98
	strb r0, [r1]
	ldr r5, _0807C8A8  @ =0x00001812
	add r1, r4, r5
	mov r0, #1
	strb r0, [r1]
_0807C878:
	ldr r0, _0807C8AC  @ =0x00000B56
	add r3, r4, r0
_0807C87C:
	ldrh r2, [r3]
	lsl r1, r2, #1
	ldr r5, _0807C8B0  @ =0x00000C62
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
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807C8A0:
	.4byte 0x000009D3
_0807C8A4:
	.4byte 0x000009D4
_0807C8A8:
	.4byte 0x00001812
_0807C8AC:
	.4byte 0x00000B56
_0807C8B0:
	.4byte 0x00000C62
	THUMB_FUNC_END sub_0807C814

