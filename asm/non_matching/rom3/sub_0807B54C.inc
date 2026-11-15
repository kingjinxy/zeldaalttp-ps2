	THUMB_FUNC_START sub_0807B54C
sub_0807B54C: @ 0x0807B54C
	push {r4-r7,lr}
	ldr r6, _0807B594  @ =gRam
	ldr r0, _0807B598  @ =0x00000B6F
	add r7, r6, r0
	ldrb r5, [r7]
	cmp r5, #0
	bne _0807B58A
	bl sub_08084A20
	ldr r1, _0807B59C  @ =0x0000097C
	add r4, r6, r1
	strh r5, [r4]
	ldr r5, _0807B5A0  @ =gUnknown_08152AC4
	add r1, r1, #106
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r5
	ldr r0, [r0]
	bl _call_via_r0
	mov r0, #1
	strh r0, [r4]
	ldr r1, _0807B5A4  @ =0x000009E7
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r5
	ldr r0, [r0]
	bl _call_via_r0
_0807B58A:
	mov r0, #0
	strb r0, [r7]
	pop {r4-r7}
	pop {r0}
	bx r0
_0807B594:
	.4byte gRam
_0807B598:
	.4byte 0x00000B6F
_0807B59C:
	.4byte 0x0000097C
_0807B5A0:
	.4byte gUnknown_08152AC4
_0807B5A4:
	.4byte 0x000009E7
	THUMB_FUNC_END sub_0807B54C

