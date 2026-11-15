	THUMB_FUNC_START sub_080FC5AC
sub_080FC5AC: @ 0x080FC5AC
	push {r4-r6,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #146
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	bge _080FC5C2
	b _080FC744
_080FC5C2:
	ldr r2, _080FC690  @ =gRam
	ldr r1, _080FC694  @ =0x000015F9
	add r0, r2, r1
	ldrb r5, [r0]
	mov r0, #150
	lsl r0, r0, #4
	add r3, r2, r0
	ldr r0, _080FC698  @ =gUnknown_0817A78C
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r0, _080FC69C  @ =gUnknown_0817A796
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldrh r0, [r3]
	add r1, r1, r0
	strh r1, [r3]
	ldr r1, _080FC6A0  @ =0x00000EE2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r3]
	mov r6, #0
	strb r1, [r0]
	ldr r3, _080FC6A4  @ =0x00000F02
	add r0, r2, r3
	add r0, r4, r0
	ldr r3, _080FC6A8  @ =0x00000961
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080FC6AC  @ =0x00000964
	add r3, r2, r0
	ldr r0, _080FC6B0  @ =gUnknown_0817A778
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r0, _080FC6B4  @ =gUnknown_0817A782
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldrh r0, [r3]
	add r1, r1, r0
	strh r1, [r3]
	ldr r1, _080FC6B8  @ =0x00000ED2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r3]
	strb r1, [r0]
	ldr r3, _080FC6BC  @ =0x00000EF2
	add r0, r2, r3
	add r0, r4, r0
	ldr r3, _080FC6C0  @ =0x00000965
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080FC6C4  @ =0x00001142
	add r1, r2, r0
	add r1, r4, r1
	ldr r0, _080FC6C8  @ =gUnknown_0817A7A0
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _080FC6CC  @ =0x00000F22
	add r1, r2, r3
	add r1, r4, r1
	ldr r0, _080FC6D0  @ =gUnknown_0817A7AA
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080FC6D4  @ =0x00000F12
	add r1, r2, r0
	add r1, r4, r1
	ldr r0, _080FC6D8  @ =gUnknown_0817A7B4
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _080FC6DC  @ =0x00001152
	add r1, r2, r3
	add r1, r4, r1
	ldr r0, _080FC6E0  @ =gUnknown_0817A7BE
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r1, #0
	ldr r3, _080FC6E4  @ =0x000009DA
	add r0, r2, r3
	ldrh r0, [r0]
	add r3, r2, #0
	cmp r0, #105
	bne _080FC67A
	mov r1, #1
_080FC67A:
	cmp r1, #0
	beq _080FC6F0
	ldr r0, _080FC6E8  @ =0x00001122
	add r2, r3, r0
	add r2, r4, r2
	ldr r0, _080FC6EC  @ =gUnknown_0817A7C8
	add r0, r5, r0
	ldrb r0, [r0]
	mov r1, #11
	b _080FC6FE
	.byte 0x00
	.byte 0x00
_080FC690:
	.4byte gRam
_080FC694:
	.4byte 0x000015F9
_080FC698:
	.4byte gUnknown_0817A78C
_080FC69C:
	.4byte gUnknown_0817A796
_080FC6A0:
	.4byte 0x00000EE2
_080FC6A4:
	.4byte 0x00000F02
_080FC6A8:
	.4byte 0x00000961
_080FC6AC:
	.4byte 0x00000964
_080FC6B0:
	.4byte gUnknown_0817A778
_080FC6B4:
	.4byte gUnknown_0817A782
_080FC6B8:
	.4byte 0x00000ED2
_080FC6BC:
	.4byte 0x00000EF2
_080FC6C0:
	.4byte 0x00000965
_080FC6C4:
	.4byte 0x00001142
_080FC6C8:
	.4byte gUnknown_0817A7A0
_080FC6CC:
	.4byte 0x00000F22
_080FC6D0:
	.4byte gUnknown_0817A7AA
_080FC6D4:
	.4byte 0x00000F12
_080FC6D8:
	.4byte gUnknown_0817A7B4
_080FC6DC:
	.4byte 0x00001152
_080FC6E0:
	.4byte gUnknown_0817A7BE
_080FC6E4:
	.4byte 0x000009DA
_080FC6E8:
	.4byte 0x00001122
_080FC6EC:
	.4byte gUnknown_0817A7C8
_080FC6F0:
	ldr r1, _080FC74C  @ =0x00001122
	add r2, r3, r1
	add r2, r4, r2
	ldr r0, _080FC750  @ =gUnknown_0817A7C8
	add r0, r5, r0
	ldrb r0, [r0]
	mov r1, #13
_080FC6FE:
	orr r0, r0, r1
	strb r0, [r2]
	ldr r2, _080FC754  @ =0x00000F92
	add r1, r3, r2
	add r1, r4, r1
	ldr r0, _080FC758  @ =gUnknown_0817A7D2
	add r0, r5, r0
	ldrb r0, [r0]
	mov r2, #0
	strb r0, [r1]
	ldr r1, _080FC75C  @ =0x00000F82
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #128
	strb r1, [r0]
	ldr r1, _080FC760  @ =0x00001012
	add r0, r3, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r2, _080FC764  @ =0x00000FD2
	add r0, r3, r2
	add r0, r4, r0
	mov r1, #12
	strb r1, [r0]
	ldr r2, _080FC768  @ =0x00001172
	add r0, r3, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _080FC76C  @ =0x00001002
	add r0, r3, r1
	add r0, r4, r0
	ldr r2, _080FC770  @ =0x000015F9
	add r1, r3, r2
	ldrb r1, [r1]
	strb r1, [r0]
_080FC744:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FC74C:
	.4byte 0x00001122
_080FC750:
	.4byte gUnknown_0817A7C8
_080FC754:
	.4byte 0x00000F92
_080FC758:
	.4byte gUnknown_0817A7D2
_080FC75C:
	.4byte 0x00000F82
_080FC760:
	.4byte 0x00001012
_080FC764:
	.4byte 0x00000FD2
_080FC768:
	.4byte 0x00001172
_080FC76C:
	.4byte 0x00001002
_080FC770:
	.4byte 0x000015F9
	THUMB_FUNC_END sub_080FC5AC

