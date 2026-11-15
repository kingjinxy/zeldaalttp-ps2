	THUMB_FUNC_START sub_080C6F48
sub_080C6F48: @ 0x080C6F48
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080C6F84  @ =gRam
	ldr r1, _080C6F88  @ =0x00001042
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	ldr r1, _080C6F8C  @ =0x00001132
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	cmp r0, #0
	beq _080C6F94
	add r0, r5, #0
	bl sub_080C7014
	ldr r1, _080C6F90  @ =0x000015E2
	add r0, r6, r1
	ldrb r0, [r0]
	b _080C7006
_080C6F84:
	.4byte gRam
_080C6F88:
	.4byte 0x00001042
_080C6F8C:
	.4byte 0x00001132
_080C6F90:
	.4byte 0x000015E2
_080C6F94:
	ldr r0, _080C6FB0  @ =0x00000B14
	add r0, r0, r6
	mov r9, r0
	ldrh r0, [r0]
	cmp r0, #0
	bne _080C6FB8
	add r0, r5, #0
	bl sub_080C7014
	ldr r1, _080C6FB4  @ =0x000015E2
	add r0, r6, r1
	ldrb r0, [r0]
	b _080C7006
	.byte 0x00
	.byte 0x00
_080C6FB0:
	.4byte 0x00000B14
_080C6FB4:
	.4byte 0x000015E2
_080C6FB8:
	ldr r1, _080C6FF4  @ =0x000010F2
	add r0, r6, r1
	add r4, r5, r0
	ldrb r0, [r4]
	ldr r1, _080C6FF8  @ =0x000015FA
	add r7, r6, r1
	strb r0, [r7]
	mov r0, #1
	strb r0, [r4]
	add r0, r5, #0
	bl sub_080C7014
	mov r1, r9
	ldrh r0, [r1]
	cmp r0, #4
	beq _080C7000
	mov r0, r8
	strb r0, [r4]
	add r0, r5, #0
	bl sub_080C7A70
	ldr r1, _080C6FFC  @ =0x000015AC
	add r0, r6, r1
	add r0, r5, r0
	add r1, r1, #54
	add r2, r6, r1
	ldrh r1, [r2]
	strb r1, [r0]
	ldrb r0, [r2]
	b _080C7006
_080C6FF4:
	.4byte 0x000010F2
_080C6FF8:
	.4byte 0x000015FA
_080C6FFC:
	.4byte 0x000015AC
_080C7000:
	ldrb r0, [r7]
	strb r0, [r4]
	ldrb r0, [r4]
_080C7006:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C6F48

	.byte 0x00
	.byte 0x00
