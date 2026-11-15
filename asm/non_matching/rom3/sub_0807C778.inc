	THUMB_FUNC_START sub_0807C778
sub_0807C778: @ 0x0807C778
	push {r4,r5,lr}
	ldr r0, _0807C7B0  @ =gRam
	ldr r2, _0807C7B4  @ =0x000009E7
	add r1, r0, r2
	ldrb r1, [r1]
	add r4, r0, #0
	cmp r1, #27
	bne _0807C7C0
	ldr r5, _0807C7B8  @ =0x000009DA
	add r0, r4, r5
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r1, _0807C7BC  @ =gUnknown_02002000
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r2, #0
	bne _0807C7C0
	add r5, r5, #224
	add r0, r4, r5
	strh r2, [r0]
	bl sub_0807C72C
	b _0807C7F8
_0807C7B0:
	.4byte gRam
_0807C7B4:
	.4byte 0x000009E7
_0807C7B8:
	.4byte 0x000009DA
_0807C7BC:
	.4byte gUnknown_02002000
_0807C7C0:
	ldr r0, _0807C800  @ =0x00000AE8
	add r3, r4, r0
	ldrh r2, [r3]
	lsl r1, r2, #1
	ldr r5, _0807C804  @ =0x00000C2A
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
	ldr r1, _0807C808  @ =0x00000AEA
	add r0, r4, r1
	strh r2, [r0]
	ldr r2, _0807C80C  @ =0x000009DA
	add r0, r4, r2
	ldrh r0, [r0]
	cmp r0, #221
	bne _0807C7F8
	ldr r5, _0807C810  @ =0x00001812
	add r1, r4, r5
	mov r0, #1
	strb r0, [r1]
_0807C7F8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807C800:
	.4byte 0x00000AE8
_0807C804:
	.4byte 0x00000C2A
_0807C808:
	.4byte 0x00000AEA
_0807C80C:
	.4byte 0x000009DA
_0807C810:
	.4byte 0x00001812
	THUMB_FUNC_END sub_0807C778

