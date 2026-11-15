	THUMB_FUNC_START sub_080BDE8C
sub_080BDE8C: @ 0x080BDE8C
	push {r4,lr}
	ldr r4, _080BDFF8  @ =gRam
	ldr r1, _080BDFFC  @ =0x000016C4
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r2, _080BE000  @ =0x00001674
	add r0, r4, r2
	strh r1, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080BE004  @ =0x000009B2
	add r0, r4, r1
	ldrb r1, [r0]
	sub r2, r2, #8
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _080BE008  @ =0x000009DA
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080BE00C  @ =0x000009C6
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #18
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080BE010  @ =0x00000B74
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080BE014  @ =0x00000B76
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080BE018  @ =0x00000B78
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080BE01C  @ =0x00000B7A
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080BE020  @ =0x00000B84
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080BE024  @ =0x00000B86
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080BE028  @ =0x00000B88
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080BE02C  @ =0x00000B8A
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080BE030  @ =0x00000952
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080BE034  @ =0x00000958
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080BE038  @ =0x00000B8C
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	mov r1, #185
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	mov r1, #186
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080BE03C  @ =0x00000BA4
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080BE040  @ =0x00000C08
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080BE044  @ =0x00000C0A
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080BE048  @ =0x00000C98
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _080BE04C  @ =0x00000C99
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _080BE050  @ =0x00000C9A
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _080BE054  @ =0x00000C9B
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	mov r1, #156
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strh r1, [r0]
	bl sub_0812A0B8
	ldr r2, _080BE058  @ =0x000016AE
	add r1, r4, r2
	strh r0, [r1]
	bl sub_0812A130
	ldr r2, _080BE05C  @ =0x000016B2
	add r1, r4, r2
	strb r0, [r1]
	ldr r1, _080BE060  @ =0x00001718
	add r0, r4, r1
	ldrb r2, [r0]
	cmp r2, #4
	bne _080BE064
	sub r1, r1, #104
	add r0, r4, r1
	strb r2, [r0]
	b _080BE06C
	.byte 0x00
	.byte 0x00
_080BDFF8:
	.4byte gRam
_080BDFFC:
	.4byte 0x000016C4
_080BE000:
	.4byte 0x00001674
_080BE004:
	.4byte 0x000009B2
_080BE008:
	.4byte 0x000009DA
_080BE00C:
	.4byte 0x000009C6
_080BE010:
	.4byte 0x00000B74
_080BE014:
	.4byte 0x00000B76
_080BE018:
	.4byte 0x00000B78
_080BE01C:
	.4byte 0x00000B7A
_080BE020:
	.4byte 0x00000B84
_080BE024:
	.4byte 0x00000B86
_080BE028:
	.4byte 0x00000B88
_080BE02C:
	.4byte 0x00000B8A
_080BE030:
	.4byte 0x00000952
_080BE034:
	.4byte 0x00000958
_080BE038:
	.4byte 0x00000B8C
_080BE03C:
	.4byte 0x00000BA4
_080BE040:
	.4byte 0x00000C08
_080BE044:
	.4byte 0x00000C0A
_080BE048:
	.4byte 0x00000C98
_080BE04C:
	.4byte 0x00000C99
_080BE050:
	.4byte 0x00000C9A
_080BE054:
	.4byte 0x00000C9B
_080BE058:
	.4byte 0x000016AE
_080BE05C:
	.4byte 0x000016B2
_080BE060:
	.4byte 0x00001718
_080BE064:
	ldr r2, _080BE074  @ =0x000016B0
	add r1, r4, r2
	mov r0, #0
	strb r0, [r1]
_080BE06C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BE074:
	.4byte 0x000016B0
	THUMB_FUNC_END sub_080BDE8C

