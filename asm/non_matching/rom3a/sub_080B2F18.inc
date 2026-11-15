	THUMB_FUNC_START sub_080B2F18
sub_080B2F18: @ 0x080B2F18
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r2, _080B2F44  @ =gRam
	ldr r1, _080B2F48  @ =0x00000534
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080B2F50
	ldr r3, _080B2F4C  @ =0x00000A4C
	add r1, r2, r3
	mov r0, #10
	strh r0, [r1]
	mov r0, #47
	mov r1, #0
	bl sub_0812A324
	b _080B319A
_080B2F44:
	.4byte gRam
_080B2F48:
	.4byte 0x00000534
_080B2F4C:
	.4byte 0x00000A4C
_080B2F50:
	ldr r0, _080B2F7C  @ =0x00000A02
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080B2F8C
	ldr r1, _080B2F80  @ =0x00000544
	add r0, r2, r1
	ldr r3, _080B2F84  @ =0x00000545
	add r1, r2, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	mov r1, #192
	and r0, r0, r1
	cmp r0, #0
	beq _080B2F90
	ldr r0, _080B2F88  @ =0x00000A4C
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	b _080B319A
_080B2F7C:
	.4byte 0x00000A02
_080B2F80:
	.4byte 0x00000544
_080B2F84:
	.4byte 0x00000545
_080B2F88:
	.4byte 0x00000A4C
_080B2F8C:
	sub r0, r0, #1
	strb r0, [r1]
_080B2F90:
	ldr r0, _080B2FE8  @ =gUnknown_020022C7
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	mov r5, #7
	cmp r0, #0
	beq _080B2FA0
	mov r5, #8
_080B2FA0:
	ldr r0, _080B2FEC  @ =gRam
	ldr r1, _080B2FF0  @ =0x00000547
	add r4, r0, r1
	ldrb r1, [r4]
	mov r0, #10
	and r0, r0, r1
	cmp r0, #0
	beq _080B2FC0
	ldr r1, _080B2FF4  @ =gUnknown_02010980
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	mov r0, #69
	mov r1, #0
	bl sub_0812A324
_080B2FC0:
	ldrb r1, [r4]
	mov r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _080B2FDA
	ldr r1, _080B2FF4  @ =gUnknown_02010980
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #69
	mov r1, #0
	bl sub_0812A324
_080B2FDA:
	ldr r1, _080B2FF4  @ =gUnknown_02010980
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _080B2FF8
	strb r5, [r1]
	b _080B3004
_080B2FE8:
	.4byte gUnknown_020022C7
_080B2FEC:
	.4byte gRam
_080B2FF0:
	.4byte 0x00000547
_080B2FF4:
	.4byte gUnknown_02010980
_080B2FF8:
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, r5
	ble _080B3004
	mov r0, #0
	strb r0, [r1]
_080B3004:
	ldr r4, _080B30FC  @ =gRam
	ldr r2, _080B3100  @ =0x00000996
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _080B305C
	bl sub_080B2C34
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _080B305C
	ldr r3, _080B3104  @ =0x0000097C
	add r1, r4, r3
	ldrb r0, [r1]
	sub r0, r0, #4
	mov r2, #0
	strb r0, [r1]
	ldr r0, _080B3108  @ =0x0000097D
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #4
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #176
	bls _080B3040
	strb r2, [r1]
_080B3040:
	ldr r1, _080B310C  @ =0x00000979
	add r0, r4, r1
	strb r2, [r0]
	ldr r2, _080B3110  @ =0x00000978
	add r1, r4, r2
	mov r0, #62
	strb r0, [r1]
	ldr r3, _080B3114  @ =0x00000975
	add r1, r4, r3
	mov r0, #2
	strb r0, [r1]
	mov r0, #16
	bl sub_080B2E5C
_080B305C:
	ldr r0, _080B30FC  @ =gRam
	ldr r2, _080B3118  @ =0x00001A4C
	add r1, r0, r2
	ldrh r1, [r1]
	mov r8, r1
	ldr r3, _080B311C  @ =0x00001A4E
	add r1, r0, r3
	ldrh r1, [r1]
	mov r9, r1
	add r4, r5, #0
	add r5, r0, #0
	mov r0, #0
	mov r10, r0
	ldr r1, _080B3110  @ =0x00000978
	add r6, r5, r1
	ldr r2, _080B3114  @ =0x00000975
	add r7, r5, r2
_080B307E:
	ldr r3, _080B3120  @ =gUnknown_02010940
	add r1, r4, r3
	ldr r2, _080B3124  @ =gUnknown_0816EED0
	add r2, r4, r2
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r0, _080B3128  @ =gUnknown_02010950
	add r3, r4, r0
	ldr r1, _080B312C  @ =gUnknown_0816EED9
	add r1, r4, r1
	ldrb r0, [r1]
	strb r0, [r3]
	ldrb r2, [r2]
	ldrb r0, [r1]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r1, _080B311C  @ =0x00001A4E
	add r0, r5, r1
	strh r2, [r0]
	ldr r2, _080B3130  @ =gUnknown_02010960
	add r1, r4, r2
	ldr r2, _080B3134  @ =gUnknown_0816EEE2
	add r2, r4, r2
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r0, _080B3138  @ =gUnknown_02010970
	add r3, r4, r0
	ldr r1, _080B313C  @ =gUnknown_0816EEEB
	add r1, r4, r1
	ldrb r0, [r1]
	strb r0, [r3]
	ldrb r2, [r2]
	ldrb r0, [r1]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r1, _080B3118  @ =0x00001A4C
	add r0, r5, r1
	strh r2, [r0]
	ldr r0, _080B3140  @ =gUnknown_02010980
	ldrb r0, [r0]
	cmp r4, r0
	bne _080B3158
	bl sub_080B2C34
	lsl r0, r0, #24
	cmp r0, #0
	beq _080B317C
	ldr r0, _080B3144  @ =gUnknown_0816EEC7
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _080B310C  @ =0x00000979
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _080B3100  @ =0x00000996
	add r0, r5, r3
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _080B3148
	mov r0, #50
	b _080B314A
	.byte 0x00
	.byte 0x00
_080B30FC:
	.4byte gRam
_080B3100:
	.4byte 0x00000996
_080B3104:
	.4byte 0x0000097C
_080B3108:
	.4byte 0x0000097D
_080B310C:
	.4byte 0x00000979
_080B3110:
	.4byte 0x00000978
_080B3114:
	.4byte 0x00000975
_080B3118:
	.4byte 0x00001A4C
_080B311C:
	.4byte 0x00001A4E
_080B3120:
	.4byte gUnknown_02010940
_080B3124:
	.4byte gUnknown_0816EED0
_080B3128:
	.4byte gUnknown_02010950
_080B312C:
	.4byte gUnknown_0816EED9
_080B3130:
	.4byte gUnknown_02010960
_080B3134:
	.4byte gUnknown_0816EEE2
_080B3138:
	.4byte gUnknown_02010970
_080B313C:
	.4byte gUnknown_0816EEEB
_080B3140:
	.4byte gUnknown_02010980
_080B3144:
	.4byte gUnknown_0816EEC7
_080B3148:
	mov r0, #54
_080B314A:
	strb r0, [r6]
	mov r0, #0
	strb r0, [r7]
	add r0, r4, #0
	bl sub_080B2E5C
	b _080B317C
_080B3158:
	bl sub_080B2C34
	lsl r0, r0, #24
	cmp r0, #0
	beq _080B317C
	ldr r0, _080B31A8  @ =gUnknown_0816EEC7
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _080B31AC  @ =0x00000979
	add r0, r5, r2
	strb r1, [r0]
	mov r0, #50
	strb r0, [r6]
	mov r3, r10
	strb r3, [r7]
	add r0, r4, #0
	bl sub_080B2E5C
_080B317C:
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r0, #0
	blt _080B3188
	b _080B307E
_080B3188:
	ldr r0, _080B31B0  @ =gRam
	ldr r2, _080B31B4  @ =0x00001A4C
	add r1, r0, r2
	mov r3, r8
	strh r3, [r1]
	ldr r1, _080B31B8  @ =0x00001A4E
	add r0, r0, r1
	mov r2, r9
	strh r2, [r0]
_080B319A:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080B31A8:
	.4byte gUnknown_0816EEC7
_080B31AC:
	.4byte 0x00000979
_080B31B0:
	.4byte gRam
_080B31B4:
	.4byte 0x00001A4C
_080B31B8:
	.4byte 0x00001A4E
	THUMB_FUNC_END sub_080B2F18

