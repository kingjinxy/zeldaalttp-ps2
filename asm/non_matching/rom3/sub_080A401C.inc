	THUMB_FUNC_START sub_080A401C
sub_080A401C: @ 0x080A401C
	push {r4-r6,lr}
	ldr r1, _080A4048  @ =gRam
	ldr r2, _080A404C  @ =0x00001718
	add r0, r1, r2
	ldrb r0, [r0]
	add r3, r1, #0
	cmp r0, #31
	bne _080A405C
	mov r5, #5
	ldr r4, _080A4050  @ =0x00000964
	add r0, r3, r4
	mov r2, #0
	strb r2, [r0]
	ldr r0, _080A4054  @ =0x00001724
	add r1, r3, r0
	mov r0, #48
	strb r0, [r1]
	ldr r1, _080A4058  @ =0x00001723
	add r0, r3, r1
	strb r2, [r0]
	b _080A4512
	.byte 0x00
	.byte 0x00
_080A4048:
	.4byte gRam
_080A404C:
	.4byte 0x00001718
_080A4050:
	.4byte 0x00000964
_080A4054:
	.4byte 0x00001724
_080A4058:
	.4byte 0x00001723
_080A405C:
	cmp r0, #22
	bne _080A406E
	mov r5, #31
	ldr r2, _080A408C  @ =0x0000180F
	add r0, r3, r2
	ldrb r1, [r0]
	cmp r1, #2
	beq _080A406E
	b _080A44AE
_080A406E:
	ldr r1, _080A4090  @ =0x00001885
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A40A0
	mov r5, #36
	ldr r2, _080A4094  @ =0x00000964
	add r1, r3, r2
	mov r0, #0
	strb r0, [r1]
	ldr r4, _080A4098  @ =0x000016D5
	add r0, r3, r4
	ldrb r1, [r0]
	ldr r2, _080A409C  @ =0x000017AF
	b _080A4320
_080A408C:
	.4byte 0x0000180F
_080A4090:
	.4byte 0x00001885
_080A4094:
	.4byte 0x00000964
_080A4098:
	.4byte 0x000016D5
_080A409C:
	.4byte 0x000017AF
_080A40A0:
	ldr r4, _080A40C8  @ =0x0000176C
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A40D8
	mov r5, #33
	ldr r1, _080A40CC  @ =0x000016D4
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	ldr r2, _080A40D0  @ =0x00000964
	add r1, r3, r2
	strb r0, [r1]
	sub r4, r4, #151
	add r0, r3, r4
	ldrb r1, [r0]
	ldr r2, _080A40D4  @ =0x000017AF
	b _080A4320
	.byte 0x00
	.byte 0x00
_080A40C8:
	.4byte 0x0000176C
_080A40CC:
	.4byte 0x000016D4
_080A40D0:
	.4byte 0x00000964
_080A40D4:
	.4byte 0x000017AF
_080A40D8:
	mov r5, #0
	ldr r4, _080A413C  @ =0x000017E1
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A40E6
	mov r5, #10
_080A40E6:
	ldr r1, _080A4140  @ =0x000009AD
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #15
	bne _080A4160
	ldr r2, _080A4144  @ =0x000009AC
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #18
	beq _080A4160
	mov r5, #10
	ldr r4, _080A4148  @ =0x000016CE
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A4160
	ldr r1, _080A414C  @ =0x000016D5
	add r0, r3, r1
	ldrb r2, [r0]
	cmp r2, #4
	beq _080A419C
	cmp r2, #6
	beq _080A419C
	ldr r1, _080A4150  @ =gUnknown_0816B331
	ldr r2, _080A4154  @ =0x000016D4
	add r0, r3, r2
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r4, _080A4158  @ =0x00000964
	add r0, r3, r4
	strb r1, [r0]
	mov r5, #25
	ldr r1, _080A415C  @ =0x00000B0A
	add r0, r3, r1
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _080A41A8
	mov r5, #26
	b _080A41A8
	.byte 0x00
	.byte 0x00
_080A413C:
	.4byte 0x000017E1
_080A4140:
	.4byte 0x000009AD
_080A4144:
	.4byte 0x000009AC
_080A4148:
	.4byte 0x000016CE
_080A414C:
	.4byte 0x000016D5
_080A4150:
	.4byte gUnknown_0816B331
_080A4154:
	.4byte 0x000016D4
_080A4158:
	.4byte 0x00000964
_080A415C:
	.4byte 0x00000B0A
_080A4160:
	ldr r2, _080A4178  @ =0x00001808
	add r0, r3, r2
	ldrb r0, [r0]
	mov r2, #3
	and r2, r2, r0
	cmp r2, #0
	beq _080A4180
	mov r5, #24
	ldr r4, _080A417C  @ =0x00001793
	add r0, r3, r4
	b _080A41A0
	.byte 0x00
	.byte 0x00
_080A4178:
	.4byte 0x00001808
_080A417C:
	.4byte 0x00001793
_080A4180:
	ldr r4, _080A420C  @ =0x000016FA
	add r0, r3, r4
	ldrb r1, [r0]
	mov r0, #13
	and r0, r0, r1
	cmp r0, #0
	beq _080A419C
	mov r5, #22
	ldr r0, _080A4210  @ =0x000016D4
	add r1, r3, r0
	ldrb r0, [r1]
	cmp r0, #4
	bls _080A419C
	strb r2, [r1]
_080A419C:
	ldr r1, _080A4210  @ =0x000016D4
	add r0, r3, r1
_080A41A0:
	ldrb r1, [r0]
	ldr r2, _080A4214  @ =0x00000964
	add r0, r3, r2
	strb r1, [r0]
_080A41A8:
	ldr r4, _080A4218  @ =0x000016D5
	add r0, r3, r4
	ldrb r1, [r0]
	ldr r2, _080A421C  @ =0x000017AF
	add r0, r3, r2
	mov r4, #0
	strb r1, [r0]
	ldr r1, _080A4220  @ =0x000017D4
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A41CE
	sub r2, r2, #139
	add r0, r3, r2
	mov r1, #32
	strb r1, [r0]
	ldr r1, _080A4224  @ =0x00001723
	add r0, r3, r1
	strb r4, [r0]
_080A41CE:
	ldr r2, _080A4228  @ =0x00001718
	add r0, r3, r2
	ldrb r2, [r0]
	cmp r2, #4
	bne _080A4280
	mov r5, #17
	ldr r4, _080A4214  @ =0x00000964
	add r2, r3, r4
	ldrb r1, [r2]
	mov r0, #1
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080A422C  @ =0x000009AD
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A4238
	ldr r4, _080A4230  @ =0x00000545
	add r0, r3, r4
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	beq _080A4238
	mov r5, #19
	ldr r1, _080A4234  @ =0x00001751
	add r0, r3, r1
	ldrb r0, [r0]
	strb r0, [r2]
	b _080A425A
	.byte 0x00
	.byte 0x00
_080A420C:
	.4byte 0x000016FA
_080A4210:
	.4byte 0x000016D4
_080A4214:
	.4byte 0x00000964
_080A4218:
	.4byte 0x000016D5
_080A421C:
	.4byte 0x000017AF
_080A4220:
	.4byte 0x000017D4
_080A4224:
	.4byte 0x00001723
_080A4228:
	.4byte 0x00001718
_080A422C:
	.4byte 0x000009AD
_080A4230:
	.4byte 0x00000545
_080A4234:
	.4byte 0x00001751
_080A4238:
	ldr r2, _080A426C  @ =0x000017CA
	add r0, r3, r2
	ldrh r0, [r0]
	cmp r0, #0
	bne _080A424C
	ldr r4, _080A4270  @ =0x000017CC
	add r0, r3, r4
	ldrh r0, [r0]
	cmp r0, #0
	beq _080A425A
_080A424C:
	mov r5, #19
	ldr r1, _080A4274  @ =0x00001751
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080A4278  @ =0x00000964
	add r0, r3, r2
	strb r1, [r0]
_080A425A:
	ldr r4, _080A427C  @ =0x000017B6
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A4266
	b _080A4512
_080A4266:
	mov r5, #18
	sub r1, r0, #1
	b _080A431E
_080A426C:
	.4byte 0x000017CA
_080A4270:
	.4byte 0x000017CC
_080A4274:
	.4byte 0x00001751
_080A4278:
	.4byte 0x00000964
_080A427C:
	.4byte 0x000017B6
_080A4280:
	ldr r1, _080A429C  @ =0x0000175F
	add r0, r3, r1
	ldrb r1, [r0]
	cmp r1, #0
	beq _080A42A4
	ldr r2, _080A42A0  @ =0x00000964
	add r0, r3, r2
	strb r4, [r0]
	mov r5, #30
	cmp r1, #2
	bne _080A4298
	b _080A4512
_080A4298:
	mov r5, #29
	b _080A4512
_080A429C:
	.4byte 0x0000175F
_080A42A0:
	.4byte 0x00000964
_080A42A4:
	ldr r4, _080A42C4  @ =0x000017FD
	add r0, r3, r4
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080A42D0
	ldr r1, _080A42C8  @ =0x00001793
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080A42CC  @ =0x00000964
	add r0, r3, r2
	strb r1, [r0]
	mov r5, #27
	b _080A4512
	.byte 0x00
	.byte 0x00
_080A42C4:
	.4byte 0x000017FD
_080A42C8:
	.4byte 0x00001793
_080A42CC:
	.4byte 0x00000964
_080A42D0:
	ldr r4, _080A42F8  @ =0x00001702
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A4346
	cmp r0, #1
	beq _080A4304
	cmp r0, #4
	bne _080A4346
	mov r5, #19
	ldr r1, _080A42FC  @ =0x00000996
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #24
	and r0, r0, r1
	lsr r2, r0, #3
	ldr r0, _080A4300  @ =gUnknown_08167E0A
	add r0, r2, r0
	ldrb r1, [r0]
	b _080A431E
_080A42F8:
	.4byte 0x00001702
_080A42FC:
	.4byte 0x00000996
_080A4300:
	.4byte gUnknown_08167E0A
_080A4304:
	cmp r2, #19
	beq _080A4346
	ldr r4, _080A4328  @ =0x00001710
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A4346
	mov r5, #5
	ldr r1, _080A432C  @ =0x000017F1
	add r0, r3, r1
	ldrb r1, [r0]
	cmp r1, #0
	bne _080A4334
_080A431E:
	ldr r2, _080A4330  @ =0x00000964
_080A4320:
	add r0, r3, r2
	strb r1, [r0]
	b _080A4512
	.byte 0x00
	.byte 0x00
_080A4328:
	.4byte 0x00001710
_080A432C:
	.4byte 0x000017F1
_080A4330:
	.4byte 0x00000964
_080A4334:
	mov r5, #20
	ldr r4, _080A4384  @ =0x00001789
	add r0, r3, r4
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	ldr r2, _080A4388  @ =0x00000964
	add r1, r3, r2
	strb r0, [r1]
_080A4346:
	add r4, r3, #0
	ldr r1, _080A438C  @ =0x00001716
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #1
	bls _080A43A0
	cmp r0, #3
	bne _080A4360
	ldr r0, _080A4390  @ =gUnknown_0816B320
	ldrh r1, [r0, #4]
	ldr r2, _080A4394  @ =0x000017E2
	add r0, r4, r2
	strh r1, [r0]
_080A4360:
	ldr r1, _080A4398  @ =0x00001715
	add r0, r4, r1
	ldrb r0, [r0]
	ldr r2, _080A4388  @ =0x00000964
	add r1, r4, r2
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #5
	bls _080A4380
	ldr r1, _080A439C  @ =0x00001724
	add r0, r4, r1
	ldrb r1, [r0]
	mov r2, #48
	orr r1, r1, r2
	strb r1, [r0]
_080A4380:
	mov r5, #4
	b _080A4512
_080A4384:
	.4byte 0x00001789
_080A4388:
	.4byte 0x00000964
_080A438C:
	.4byte 0x00001716
_080A4390:
	.4byte gUnknown_0816B320
_080A4394:
	.4byte 0x000017E2
_080A4398:
	.4byte 0x00001715
_080A439C:
	.4byte 0x00001724
_080A43A0:
	ldr r2, _080A43D0  @ =0x00001791
	add r6, r4, r2
	ldrb r0, [r6]
	cmp r0, #0
	beq _080A4428
	bl sub_080A6B14
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #5
	bhi _080A43BE
	ldr r0, _080A43D4  @ =0x000017AF
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
_080A43BE:
	ldr r0, _080A43D8  @ =gUnknown_0816B348
	add r0, r2, r0
	ldrb r5, [r0]
	cmp r5, #12
	bhi _080A43E0
	ldr r1, _080A43DC  @ =0x00001793
	add r0, r4, r1
	ldrb r1, [r0]
	b _080A44D4
_080A43D0:
	.4byte 0x00001791
_080A43D4:
	.4byte 0x000017AF
_080A43D8:
	.4byte gUnknown_0816B348
_080A43DC:
	.4byte 0x00001793
_080A43E0:
	ldr r1, _080A4408  @ =0x00001792
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080A43F4
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
_080A43F4:
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080A4410
	mov r5, #16
	ldr r2, _080A440C  @ =0x00001793
	add r0, r4, r2
	ldrb r1, [r0]
	b _080A44D4
	.byte 0x00
	.byte 0x00
_080A4408:
	.4byte 0x00001792
_080A440C:
	.4byte 0x00001793
_080A4410:
	ldrb r1, [r6]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080A441C
	b _080A4512
_080A441C:
	ldr r1, _080A4424  @ =0x00001793
	add r0, r4, r1
	ldrb r1, [r0]
	b _080A44D4
_080A4424:
	.4byte 0x00001793
_080A4428:
	ldr r1, _080A4438  @ =0x00001809
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A443C
	mov r5, #23
	sub r1, r0, #1
	b _080A44D4
_080A4438:
	.4byte 0x00001809
_080A443C:
	ldr r0, _080A445C  @ =0x0000178A
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080A4468
	bl sub_080A6B14
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _080A4460  @ =gUnknown_0816B33A
	add r0, r2, r0
	ldrb r5, [r0]
	ldr r1, _080A4464  @ =0x00001789
	add r0, r4, r1
	ldrb r1, [r0]
	b _080A44D4
_080A445C:
	.4byte 0x0000178A
_080A4460:
	.4byte gUnknown_0816B33A
_080A4464:
	.4byte 0x00001789
_080A4468:
	ldr r0, _080A4488  @ =0x0000180C
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080A4494
	bl sub_080A6B14
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _080A448C  @ =gUnknown_0816B342
	add r0, r2, r0
	ldrb r5, [r0]
	ldr r1, _080A4490  @ =0x00001789
	add r0, r4, r1
	ldrb r1, [r0]
	b _080A44D4
_080A4488:
	.4byte 0x0000180C
_080A448C:
	.4byte gUnknown_0816B342
_080A4490:
	.4byte 0x00001789
_080A4494:
	ldr r1, _080A44B8  @ =0x00001718
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #10
	beq _080A44A6
	cmp r0, #8
	beq _080A44A6
	cmp r0, #9
	bne _080A44C4
_080A44A6:
	mov r5, #21
	ldr r2, _080A44BC  @ =0x000017A6
	add r0, r3, r2
	ldrh r1, [r0]
_080A44AE:
	ldr r4, _080A44C0  @ =0x00000964
	add r0, r3, r4
	strb r1, [r0]
	b _080A4512
	.byte 0x00
	.byte 0x00
_080A44B8:
	.4byte 0x00001718
_080A44BC:
	.4byte 0x000017A6
_080A44C0:
	.4byte 0x00000964
_080A44C4:
	cmp r0, #30
	beq _080A44CC
	cmp r0, #3
	bne _080A44E4
_080A44CC:
	mov r5, #15
	ldr r1, _080A44DC  @ =0x000017A6
	add r0, r4, r1
	ldrh r1, [r0]
_080A44D4:
	ldr r2, _080A44E0  @ =0x00000964
	add r0, r4, r2
	strb r1, [r0]
	b _080A4512
_080A44DC:
	.4byte 0x000017A6
_080A44E0:
	.4byte 0x00000964
_080A44E4:
	ldr r4, _080A4520  @ =0x000016E8
	add r0, r3, r4
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080A4512
	ldr r1, _080A4524  @ =0x000016EA
	add r0, r3, r1
	ldrb r0, [r0]
	add r2, r0, #0
	mov r5, #2
	cmp r2, #9
	beq _080A4512
	mov r5, #39
	ldr r4, _080A4528  @ =0x00000964
	add r1, r3, r4
	strb r0, [r1]
	cmp r2, #8
	bls _080A4512
	sub r0, r0, #10
	strb r0, [r1]
	mov r5, #3
_080A4512:
	add r0, r5, #0
	bl sub_080A46DC
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A4520:
	.4byte 0x000016E8
_080A4524:
	.4byte 0x000016EA
_080A4528:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080A401C

