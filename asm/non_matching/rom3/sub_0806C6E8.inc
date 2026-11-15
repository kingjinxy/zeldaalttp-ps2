	THUMB_FUNC_START sub_0806C6E8
sub_0806C6E8: @ 0x0806C6E8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _0806C77C  @ =gRam
	ldr r0, _0806C780  @ =0x00000A34
	add r0, r0, r1
	mov r9, r0
	ldrh r0, [r0]
	add r0, r0, #1
	mov r2, #0
	mov r3, r9
	strh r0, [r3]
	ldr r7, _0806C784  @ =0x00000ABE
	add r0, r1, r7
	ldrh r0, [r0]
	lsl r0, r0, #1
	mov r10, r0
	ldr r3, _0806C788  @ =0x00000A28
	add r0, r1, r3
	strh r2, [r0]
	sub r7, r7, #148
	add r0, r1, r7
	strh r2, [r0]
	mov r6, #6
	mov r8, r1
	mov r0, r10
	cmp r0, #3
	ble _0806C726
	mov r6, #0
_0806C726:
	asr r6, r6, #1
	add r2, r6, #1
	lsl r2, r2, #1
	mov r3, #149
	lsl r3, r3, #4
	add r3, r3, r8
	add r2, r2, r3
	ldr r0, _0806C78C  @ =gUnknown_0814CAF2
	mov r1, r10
	asr r4, r1, #1
	lsl r5, r4, #1
	add r0, r5, r0
	ldrh r0, [r0]
	mov r12, r0
	ldrh r1, [r2]
	add r1, r1, r12
	mov r7, #2
	neg r7, r7
	add r0, r7, #0
	and r1, r1, r0
	strh r1, [r2]
	lsl r0, r6, #1
	add r0, r0, r3
	strh r1, [r0]
	ldrh r1, [r2]
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r8
	strh r1, [r0]
	mov r0, r10
	cmp r0, #3
	bgt _0806C794
	ldr r0, _0806C790  @ =gUnknown_0814CAFA
	add r0, r5, r0
	mov r2, r9
	ldrb r1, [r2]
	ldrh r0, [r0]
	cmp r1, r0
	bcc _0806C7AC
	mov r1, #182
	lsl r1, r1, #5
	b _0806C7A4
	.byte 0x00
	.byte 0x00
_0806C77C:
	.4byte gRam
_0806C780:
	.4byte 0x00000A34
_0806C784:
	.4byte 0x00000ABE
_0806C788:
	.4byte 0x00000A28
_0806C78C:
	.4byte gUnknown_0814CAF2
_0806C790:
	.4byte gUnknown_0814CAFA
_0806C794:
	ldr r0, _0806C7FC  @ =gUnknown_0814CAFA
	add r0, r5, r0
	mov r3, r9
	ldrb r1, [r3]
	ldrh r0, [r0]
	cmp r1, r0
	bcc _0806C7AC
	ldr r1, _0806C800  @ =0x000016C4
_0806C7A4:
	add r1, r1, r8
	ldrh r0, [r1]
	add r0, r0, r12
	strh r0, [r1]
_0806C7AC:
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r8
	ldrh r0, [r0]
	mov r2, #254
	lsl r2, r2, #1
	and r2, r2, r0
	lsl r0, r4, #1
	ldr r1, _0806C804  @ =0x00000B84
	add r1, r1, r8
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r2, r0
	bne _0806C7EC
	bl sub_0806FE5C
	ldr r1, _0806C808  @ =0x000009E8
	add r1, r1, r8
	ldrh r0, [r1]
	add r0, r0, #1
	mov r2, #0
	strh r0, [r1]
	ldr r0, _0806C80C  @ =0x00000A34
	add r0, r0, r8
	strh r2, [r0]
	ldr r0, _0806C810  @ =0x000009AD
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #2
	bne _0806C7EC
	bl sub_08079338
_0806C7EC:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806C7FC:
	.4byte gUnknown_0814CAFA
_0806C800:
	.4byte 0x000016C4
_0806C804:
	.4byte 0x00000B84
_0806C808:
	.4byte 0x000009E8
_0806C80C:
	.4byte 0x00000A34
_0806C810:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806C6E8

