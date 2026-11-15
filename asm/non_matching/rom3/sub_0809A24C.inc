	THUMB_FUNC_START sub_0809A24C
sub_0809A24C: @ 0x0809A24C
	push {r4,r5,lr}
	ldr r0, _0809A264  @ =gRam
	ldr r2, _0809A268  @ =0x000009B2
	add r1, r0, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r5, r0, #0
	cmp r1, #0
	bne _0809A26C
	mov r2, #2
	b _0809A27E
_0809A264:
	.4byte gRam
_0809A268:
	.4byte 0x000009B2
_0809A26C:
	ldr r4, _0809A300  @ =0x000009B5
	add r0, r5, r4
	ldrb r2, [r0]
	ldr r1, _0809A304  @ =0x00000B22
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _0809A27E
	mov r2, #0
_0809A27E:
	add r3, r5, #0
	mov r0, #150
	lsl r0, r0, #4
	add r4, r3, r0
	strb r2, [r4]
	ldr r0, _0809A308  @ =gUnknown_08167ED0
	add r0, r2, r0
	ldrb r2, [r0]
	ldr r1, _0809A30C  @ =0x00001726
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809A29E
	neg r0, r2
	lsl r0, r0, #24
	lsr r2, r0, #24
_0809A29E:
	ldr r1, _0809A310  @ =0x000016CD
	add r0, r3, r1
	strb r2, [r0]
	ldr r2, _0809A314  @ =0x000016CE
	add r1, r3, r2
	mov r0, #0
	strb r0, [r1]
	ldrb r2, [r4]
	ldr r0, _0809A318  @ =gUnknown_08167ED3
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r4, _0809A31C  @ =0x000016CF
	add r0, r3, r4
	strb r1, [r0]
	ldrb r1, [r0]
	add r4, r4, #125
	add r0, r3, r4
	mov r4, #0
	strh r1, [r0]
	ldr r1, _0809A320  @ =0x000016C8
	add r0, r3, r1
	strb r4, [r0]
	add r1, r1, #1
	add r0, r3, r1
	strb r4, [r0]
	ldr r0, _0809A324  @ =gUnknown_08167ED6
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r2, _0809A328  @ =0x000016F8
	add r0, r3, r2
	strb r1, [r0]
	ldr r0, _0809A32C  @ =0x00001702
	add r1, r3, r0
	ldrb r0, [r1]
	cmp r0, #2
	beq _0809A2F0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _0809A330  @ =0x000017F1
	add r0, r3, r1
	strb r4, [r0]
_0809A2F0:
	ldr r2, _0809A334  @ =0x00001718
	add r1, r5, r2
	mov r0, #6
	strb r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809A300:
	.4byte 0x000009B5
_0809A304:
	.4byte 0x00000B22
_0809A308:
	.4byte gUnknown_08167ED0
_0809A30C:
	.4byte 0x00001726
_0809A310:
	.4byte 0x000016CD
_0809A314:
	.4byte 0x000016CE
_0809A318:
	.4byte gUnknown_08167ED3
_0809A31C:
	.4byte 0x000016CF
_0809A320:
	.4byte 0x000016C8
_0809A324:
	.4byte gUnknown_08167ED6
_0809A328:
	.4byte 0x000016F8
_0809A32C:
	.4byte 0x00001702
_0809A330:
	.4byte 0x000017F1
_0809A334:
	.4byte 0x00001718
	THUMB_FUNC_END sub_0809A24C

