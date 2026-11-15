	THUMB_FUNC_START sub_0809C2B8
sub_0809C2B8: @ 0x0809C2B8
	push {r4-r6,lr}
	ldr r2, _0809C2FC  @ =gRam
	ldr r0, _0809C300  @ =0x00001605
	add r1, r2, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _0809C304  @ =0x000016EB
	add r1, r2, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809C370
	ldr r1, _0809C308  @ =0x000017A6
	add r2, r2, r1
	mov r1, #128
	lsl r1, r1, #1
	add r0, r1, #0
	ldrh r1, [r2]
	add r0, r0, r1
	strh r0, [r2]
	mov r1, #255
	lsl r1, r1, #8
	and r0, r0, r1
	lsr r4, r0, #8
	cmp r4, #4
	bne _0809C30C
	mov r0, #107
	bl sub_0809E49C
	b _0809C324
	.byte 0x00
	.byte 0x00
_0809C2FC:
	.4byte gRam
_0809C300:
	.4byte 0x00001605
_0809C304:
	.4byte 0x000016EB
_0809C308:
	.4byte 0x000017A6
_0809C30C:
	cmp r4, #10
	bne _0809C318
	mov r0, #15
	bl sub_0809E43C
	b _0809C324
_0809C318:
	cmp r4, #20
	bne _0809C324
	mov r0, #152
	lsl r0, r0, #5
	strh r0, [r2]
	mov r4, #19
_0809C324:
	ldr r5, _0809C378  @ =gRam
	ldr r0, _0809C37C  @ =gUnknown_08168010
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _0809C380  @ =0x000016EB
	add r0, r5, r2
	strb r1, [r0]
	ldr r0, _0809C384  @ =0x000017A6
	add r2, r5, r0
	ldrh r0, [r2]
	mov r1, #255
	lsl r1, r1, #8
	and r1, r1, r0
	ldr r0, _0809C388  @ =gUnknown_08167FFC
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r1
	mov r6, #0
	strh r0, [r2]
	ldr r2, _0809C38C  @ =0x000017B0
	add r1, r5, r2
	ldrh r0, [r1]
	cmp r0, #0
	bne _0809C370
	cmp r4, #19
	bne _0809C370
	mov r0, #1
	strh r0, [r1]
	mov r0, #0
	mov r1, #25
	bl sub_08120460
	ldr r1, _0809C390  @ =0x00001702
	add r0, r5, r1
	strb r6, [r0]
	ldr r2, _0809C394  @ =0x000016F8
	add r0, r5, r2
	strb r6, [r0]
_0809C370:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809C378:
	.4byte gRam
_0809C37C:
	.4byte gUnknown_08168010
_0809C380:
	.4byte 0x000016EB
_0809C384:
	.4byte 0x000017A6
_0809C388:
	.4byte gUnknown_08167FFC
_0809C38C:
	.4byte 0x000017B0
_0809C390:
	.4byte 0x00001702
_0809C394:
	.4byte 0x000016F8
	THUMB_FUNC_END sub_0809C2B8

