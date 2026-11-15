	THUMB_FUNC_START sub_0809C1BC
sub_0809C1BC: @ 0x0809C1BC
	push {r4-r6,lr}
	ldr r4, _0809C218  @ =gRam
	ldr r1, _0809C21C  @ =0x00001605
	add r0, r4, r1
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #0
	mov r1, #224
	bl sub_081337C8
	ldr r2, _0809C220  @ =0x00001644
	add r1, r4, r2
	ldrb r0, [r1]
	cmp r0, #159
	bhi _0809C1E0
	mov r0, #160
	strb r0, [r1]
_0809C1E0:
	ldr r0, _0809C224  @ =0x000016EB
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809C290
	ldr r1, _0809C228  @ =0x000017A6
	add r2, r4, r1
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
	cmp r4, #11
	beq _0809C244
	cmp r4, #4
	bne _0809C22C
	mov r0, #107
	bl sub_0809E49C
	b _0809C244
_0809C218:
	.4byte gRam
_0809C21C:
	.4byte 0x00001605
_0809C220:
	.4byte 0x00001644
_0809C224:
	.4byte 0x000016EB
_0809C228:
	.4byte 0x000017A6
_0809C22C:
	cmp r4, #9
	bne _0809C238
	mov r0, #15
	bl sub_0809E43C
	b _0809C244
_0809C238:
	cmp r4, #12
	bne _0809C244
	mov r0, #160
	lsl r0, r0, #4
	strh r0, [r2]
	mov r4, #10
_0809C244:
	ldr r5, _0809C298  @ =gRam
	ldr r0, _0809C29C  @ =gUnknown_08167FF0
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _0809C2A0  @ =0x000016EB
	add r0, r5, r2
	strb r1, [r0]
	ldr r0, _0809C2A4  @ =0x000017A6
	add r2, r5, r0
	ldrh r0, [r2]
	mov r1, #255
	lsl r1, r1, #8
	and r1, r1, r0
	ldr r0, _0809C2A8  @ =gUnknown_08167FE4
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r1
	mov r6, #0
	strh r0, [r2]
	ldr r2, _0809C2AC  @ =0x000017B0
	add r1, r5, r2
	ldrh r0, [r1]
	cmp r0, #0
	bne _0809C290
	cmp r4, #10
	bne _0809C290
	mov r0, #1
	strh r0, [r1]
	mov r0, #0
	mov r1, #24
	bl sub_080ADFC4
	ldr r1, _0809C2B0  @ =0x00001702
	add r0, r5, r1
	strb r6, [r0]
	ldr r2, _0809C2B4  @ =0x000016F8
	add r0, r5, r2
	strb r6, [r0]
_0809C290:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809C298:
	.4byte gRam
_0809C29C:
	.4byte gUnknown_08167FF0
_0809C2A0:
	.4byte 0x000016EB
_0809C2A4:
	.4byte 0x000017A6
_0809C2A8:
	.4byte gUnknown_08167FE4
_0809C2AC:
	.4byte 0x000017B0
_0809C2B0:
	.4byte 0x00001702
_0809C2B4:
	.4byte 0x000016F8
	THUMB_FUNC_END sub_0809C1BC

