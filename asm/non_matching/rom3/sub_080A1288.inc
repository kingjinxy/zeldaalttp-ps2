	THUMB_FUNC_START sub_080A1288
sub_080A1288: @ 0x080A1288
	push {r4,lr}
	ldr r2, _080A12E0  @ =gRam
	ldr r1, _080A12E4  @ =0x000016E8
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	add r4, r2, #0
	cmp r0, #0
	beq _080A12AA
	ldr r2, _080A12E8  @ =0x000016EA
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #8
	bgt _080A1312
_080A12AA:
	ldr r0, _080A12EC  @ =0x00001808
	add r2, r4, r0
	mov r3, #0
	mov r1, #1
	mov r0, #1
	strb r0, [r2]
	ldr r0, _080A12F0  @ =0x00001705
	add r2, r4, r0
	ldrb r0, [r2]
	orr r1, r1, r0
	strb r1, [r2]
	ldr r1, _080A12F4  @ =0x000016D4
	add r0, r4, r1
	strb r3, [r0]
	ldr r2, _080A12F8  @ =0x00001793
	add r0, r4, r2
	strb r3, [r0]
	ldr r1, _080A12FC  @ =0x000017FE
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A1300
	add r2, r2, #1
	add r1, r4, r2
	mov r0, #16
	strb r0, [r1]
	b _080A130A
_080A12E0:
	.4byte gRam
_080A12E4:
	.4byte 0x000016E8
_080A12E8:
	.4byte 0x000016EA
_080A12EC:
	.4byte 0x00001808
_080A12F0:
	.4byte 0x00001705
_080A12F4:
	.4byte 0x000016D4
_080A12F8:
	.4byte 0x00001793
_080A12FC:
	.4byte 0x000017FE
_080A1300:
	ldr r0, _080A1318  @ =gUnknown_08168C61
	ldrb r1, [r0]
	ldr r2, _080A131C  @ =0x00001794
	add r0, r4, r2
	strb r1, [r0]
_080A130A:
	ldr r0, _080A1320  @ =0x00001796
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
_080A1312:
	pop {r4}
	pop {r0}
	bx r0
_080A1318:
	.4byte gUnknown_08168C61
_080A131C:
	.4byte 0x00001794
_080A1320:
	.4byte 0x00001796
	THUMB_FUNC_END sub_080A1288

